using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace MotorTest
{
    class wikan
    {
        ///////축 명칭 설정////////////////////////////////////////////////////
        public UInt16 J1AXIS = 0x01;
        public UInt16 J2AXIS = 0x02;
        public UInt16 J3AXIS = 0x04;
        public UInt16 J4AXIS = 0x08;
        public UInt16 J5AXIS = 0x10;
        public UInt16 J6AXIS = 0x40;

        ///////WIKAN DLL파일 읽어 사용할 WIKAN전용 함수 불러오기///////////////// 
        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern void WIMC_Get_DllVer(char[] dllver, int d);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern Int32 WIMC_Open_Comm(Int32 port, Int32 baud);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_GOut(UInt32 val);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_SetBit_GOut(UInt32 setMask);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_ClrBit_GOut(UInt32 clrMask);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern Int32 WIMC_Get_StateTimer(UInt32 hz);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_StateTimer(UInt32 hz);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern Int32 WIMC_Get_CurPos(UInt16 axis);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern void WIMC_Enter_QueueCmd();

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern void WIMC_Leave_QueueCmd();

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern void WIMC_Enter_ImCmd();

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern void WIMC_Leave_ImCmd();

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_VelMode(Int32 mode);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_DriveVel(Int32 pps);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_StartVel(Int32 pps);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_Acc(Int32 pps);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_Dec(Int32 pps);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_PulseMode(UInt16 axis, Int32 mode);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_PulseLevel(UInt16 axis, bool Level);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_DirLevel(UInt16 axis, bool Level);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Line(UInt16 axis, Int32[] pulse);

        [DllImport("WIMC_ImLib-x64.dll")]
        public static extern bool WIMC_Set_PosMode(Int32 mode);

        [DllImport("User32.Dll")]
        public static extern int MessageBox(int h, string m, string c, int type);


        //////////전체 동일 각도 입력인 모터 동작함수///////////////////////////////////////////////////////////////////////////////
        public void JLine(double angle)
        {
            WIMC_Set_PosMode(1);
            WIMC_Set_PulseMode(0x1f, 1);
            WIMC_Set_PulseLevel(0x1f, true);
            WIMC_Set_DirLevel(0x1f, false);


            WIMC_Enter_QueueCmd();



            // 속도설정
            WIMC_Set_VelMode(1);
            WIMC_Set_DriveVel(10000);
            WIMC_Set_StartVel(2000);
            WIMC_Set_Acc(100);
            WIMC_Set_Dec(100);

            // 이동량설정
            Int32[] pulse = new Int32[8];

            for (int i = 0; i < 8; i++)
            {
                pulse[i] = 0;
            }

            pulse[0] = Convert.ToInt32(angle / 0.1125 * 24 * (96.51 / 23.75));
            pulse[1] = Convert.ToInt32(angle / 0.1125 * 53);
            pulse[2] = Convert.ToInt32(angle / 0.1125 * 64);
            pulse[3] = Convert.ToInt32(angle / 0.1125 * 14 * (44.77 / 15.66));
            pulse[4] = Convert.ToInt32(angle / 0.1125 * 9.42);
            pulse[6] = Convert.ToInt32(angle / 0.1125 * 19 * 5);



            // 라인 명령
            WIMC_Line(0x5f, pulse);

            //---------------------------------------------------------------------
            //	
            //---------------------------------------------------------------------
            WIMC_Leave_QueueCmd();

        }

        //////////각각의 각도 입력인 모터 동작함수///////////////////////////////////////////////////////////////////////////////
        public void J2Line(double angle1, double angle2, double angle3, double angle4, double angle5, double angle6)
        {
            WIMC_Set_PosMode(1);
            WIMC_Set_PulseMode(0x5f, 1);
            WIMC_Set_PulseLevel(0x5f, true);
            WIMC_Set_DirLevel(0x5f, false);
            //CW_CCW();

            WIMC_Enter_QueueCmd();

            // 속도설정
            WIMC_Set_VelMode(1);

            WIMC_Set_DriveVel(10000);
            WIMC_Set_StartVel(2000);
            WIMC_Set_Acc(100);
            WIMC_Set_Dec(100);



            // 이동량설정
            Int32[] pulse = new Int32[8];

            for (int i = 0; i < 8; i++)
            {
                pulse[i] = 0;
            }

            pulse[0] = Convert.ToInt32(angle1 / 0.1125 * 24 * (96.51 / 23.75));
            pulse[1] = Convert.ToInt32(angle2 / 0.1125 * 53);
            pulse[2] = Convert.ToInt32(angle3 / 0.1125 * 64);
            pulse[3] = Convert.ToInt32(angle4 / 0.1125 * 14 * (44.77 / 15.66));
            pulse[4] = Convert.ToInt32(angle5 / 0.1125 * 9.42);
            pulse[6] = Convert.ToInt32(angle6 * 19);

            // 라인 명령
            WIMC_Line(0x5f, pulse);

            WIMC_Leave_QueueCmd();

        }

        //////////각각의 Dir, 각각의 각도 입력인 모터 동작함수///////////////////////////////////////////////////////////////////////////////
        public void J3Line(bool[] Dir, double angle1, double angle2, double angle3, double angle4, double angle5, double angle6)
        {

            WIMC_Set_PosMode(1); /////절대위치 = 1, 상대위치 = 0
            WIMC_Set_PulseMode(0x5f, 1); /////Pulse/Dir 모드 = 1, cw/ccw 모드 = 0;

            CWCCW(Dir);/////Dir에 따른 각축 회전방향 설정 함수///////

            WIMC_Enter_QueueCmd();

            // 속도설정
            WIMC_Set_VelMode(1);/////가감속 모드 설정, 가감속 없음 = 0, 1차프로파일 = 1, 2차프로파일 = 2/////////

            WIMC_Set_DriveVel(2000000);/////최대속도
            WIMC_Set_StartVel(10000);/////시작속도
            WIMC_Set_Acc(10000);/////1회 가속량
            WIMC_Set_Dec(10000);/////1회 감속량

            // 이동량설정/////////////////////////////
            Int32[] pulse = new Int32[8];

            for (int i = 0; i < 8; i++)
            {
                pulse[i] = 0;
            }

            pulse[0] = Convert.ToInt32(angle1 / 0.1125 * 24 * (96.51 / 23.75));
            pulse[1] = Convert.ToInt32(angle2 / 0.1125 * 53);
            pulse[2] = Convert.ToInt32(angle3 / 0.1125 * 64);
            pulse[3] = Convert.ToInt32(angle4 / 0.1125 * 14 * (44.77 / 15.66));
            pulse[4] = Convert.ToInt32(angle5 / 0.1125 * 9.42);
            pulse[6] = Convert.ToInt32(angle6 / 0.1125 * 19);

            // 라인 명령
            WIMC_Line(0x5f, pulse);

            WIMC_Leave_QueueCmd();

        }

        //____________________________________________________________________________________________________________
        //__________J6 따로 돌리기____________________________________________________________________________________
        //____________________________________________________________________________________________________________

        public void J_6Line(double angle)
        {
            WIMC_Set_PosMode(1);
            WIMC_Set_PulseMode(0x1f, 1);
            WIMC_Set_PulseLevel(0x1f, true);
            WIMC_Set_DirLevel(0x1f, false);


            WIMC_Enter_QueueCmd();



            // 속도설정
            WIMC_Set_VelMode(1);
            WIMC_Set_DriveVel(10000);
            WIMC_Set_StartVel(2000);
            WIMC_Set_Acc(100);
            WIMC_Set_Dec(100);

            // 이동량설정
            Int32[] pulse = new Int32[8];

            for (int i = 0; i < 8; i++)
            {
                pulse[i] = 0;
            }

            pulse[0] = Convert.ToInt32(angle / 0.1125 * 24 * (96.51 / 23.75));
            pulse[1] = Convert.ToInt32(angle / 0.1125 * 53);
            pulse[2] = Convert.ToInt32(angle / 0.1125 * 64);
            pulse[3] = Convert.ToInt32(angle / 0.1125 * 14 * (44.77 / 15.66));
            pulse[4] = Convert.ToInt32(angle / 0.1125 * 9.42);



            // 라인 명령
            WIMC_Line(0x1f, pulse);

            //---------------------------------------------------------------------
            //	
            //---------------------------------------------------------------------
            WIMC_Leave_QueueCmd();

        }

        public void J2_6Line(double angle1, double angle2, double angle3, double angle4, double angle5)
        {
            WIMC_Set_PosMode(1);
            WIMC_Set_PulseMode(0x1f, 1);
            WIMC_Set_PulseLevel(0x1f, true);
            WIMC_Set_DirLevel(0x1f, false);
            //CW_CCW();

            WIMC_Enter_QueueCmd();

            // 속도설정
            WIMC_Set_VelMode(1);

            WIMC_Set_DriveVel(10000);
            WIMC_Set_StartVel(2000);
            WIMC_Set_Acc(100);
            WIMC_Set_Dec(100);



            // 이동량설정
            Int32[] pulse = new Int32[8];

            for (int i = 0; i < 8; i++)
            {
                pulse[i] = 0;
            }

            pulse[0] = Convert.ToInt32(angle1 / 0.1125 * 24 * (96.51 / 23.75));
            pulse[1] = Convert.ToInt32(angle2 / 0.1125 * 53);
            pulse[2] = Convert.ToInt32(angle3 / 0.1125 * 64);
            pulse[3] = Convert.ToInt32(angle4 / 0.1125 * 14 * (44.77 / 15.66));
            pulse[4] = Convert.ToInt32(angle5 / 0.1125 * 9.42);

            // 라인 명령
            WIMC_Line(0x1f, pulse);

            WIMC_Leave_QueueCmd();

        }

        public void J6Line(double angle6)
        {
            WIMC_Set_PosMode(1);
            WIMC_Set_PulseMode(0x40, 1);
            WIMC_Set_PulseLevel(0x40, true);
            WIMC_Set_DirLevel(0x40, false);
            //CW_CCW();

            WIMC_Enter_QueueCmd();

            // 속도설정
            WIMC_Set_VelMode(1);

            WIMC_Set_DriveVel(50000);
            WIMC_Set_StartVel(4000);
            WIMC_Set_Acc(250);
            WIMC_Set_Dec(250);



            // 이동량설정
            Int32[] pulse = new Int32[8];
          

            pulse[6] = Convert.ToInt32(angle6 / 0.1125 * 19);

            // 라인 명령
            WIMC_Line(0x40, pulse);

            WIMC_Leave_QueueCmd();

        }



        ///////////Dir에 따라 각 축별 회전방향 설정///////////////////
        void CWCCW(bool[] Dir)
        {
            WIMC_Set_PulseLevel(J1AXIS, Dir[0]);
            WIMC_Set_DirLevel(J1AXIS, !Dir[0]);
            WIMC_Set_PulseLevel(J2AXIS, Dir[1]);
            WIMC_Set_DirLevel(J2AXIS, !Dir[1]);
            WIMC_Set_PulseLevel(J3AXIS, Dir[2]);
            WIMC_Set_DirLevel(J3AXIS, !Dir[2]);
            WIMC_Set_PulseLevel(J4AXIS, Dir[3]);
            WIMC_Set_DirLevel(J4AXIS, !Dir[3]);
            WIMC_Set_PulseLevel(J5AXIS, Dir[4]);
            WIMC_Set_DirLevel(J5AXIS, !Dir[4]);
            WIMC_Set_PulseLevel(J6AXIS, Dir[5]);
            WIMC_Set_DirLevel(J6AXIS, !Dir[5]);
        }
    }
}
