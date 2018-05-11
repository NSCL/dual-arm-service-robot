using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MotorTest
{
    public partial class Form1 : Form
    {
        wikan WIKAN = new wikan();
        double[] AngleIN = new double[6];

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btn_connect_Click(object sender, EventArgs e)
        {
            Int32 connecting = wikan.WIMC_Open_Comm(3, 115200);

            //////////성공/////////////////////
            if (connecting == 0)
            {
                txt_connect.Text = "Connect";
                Angletimer.Enabled = true;
            }
            /////////실패///////////////////////
            else
            {
                txt_connect.Text = "Fall";

            }

            Angletimer.Enabled = true;
        }

        private void Angletimer_Tick(object sender, EventArgs e)
        {
            ////////////////현재각도 받아오기////////////
            Int32 j1 = wikan.WIMC_Get_CurPos(WIKAN.J1AXIS);
            Int32 j2 = wikan.WIMC_Get_CurPos(WIKAN.J2AXIS);
            Int32 j3 = wikan.WIMC_Get_CurPos(WIKAN.J3AXIS);
            Int32 j4 = wikan.WIMC_Get_CurPos(WIKAN.J4AXIS);
            Int32 j5 = wikan.WIMC_Get_CurPos(WIKAN.J5AXIS);
            Int32 j6 = wikan.WIMC_Get_CurPos(WIKAN.J6AXIS);

            ///////////각도 표시///////////////////
            txt_J1.Text = j1.ToString();
            txt_J2.Text = j2.ToString();
            txt_J3.Text = j3.ToString();
            txt_J4.Text = j4.ToString();
            txt_J5.Text = j5.ToString();
            txt_J6.Text = j6.ToString();
        }

        private void btn0_Click(object sender, EventArgs e)
        {
            WIKAN.J_6Line(0);
            WIKAN.J6Line(0);
        }

        private void btn_Start_Click(object sender, EventArgs e)
        {
            WIKAN.J_6Line(90);
            WIKAN.J6Line(90);

        }

        private void txtRun_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnRun_Click(object sender, EventArgs e)
        {
            double angle = Convert.ToDouble(txtRun.Text);//////////텍스트에 입력된 값 받아옴
            WIKAN.J_6Line(angle);
            WIKAN.J6Line(angle);
        }

        void AngleTextRead()
        {

            AngleIN[0] = Convert.ToDouble(txtdeg1.Text);
            AngleIN[1] = Convert.ToDouble(txtdeg2.Text);
            AngleIN[2] = Convert.ToDouble(txtdeg3.Text);
            AngleIN[3] = Convert.ToDouble(txtdeg4.Text);
            AngleIN[4] = Convert.ToDouble(txtdeg5.Text);
            AngleIN[5] = Convert.ToDouble(txtdeg6.Text);

        }

        private void btnMotion_Click(object sender, EventArgs e)
        {
            AngleTextRead();/////텍스트에 입력된 각도 값 읽음/////////////////////////////
            WIKAN.J2_6Line(AngleIN[0], AngleIN[1], AngleIN[2], AngleIN[3], AngleIN[4]);
            WIKAN.J6Line(AngleIN[5]);//////각축에 해당되는 각도들 만큼 동작////////////
        }
    }
}
