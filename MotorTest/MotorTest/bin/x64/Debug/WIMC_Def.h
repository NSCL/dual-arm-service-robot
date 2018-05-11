/*-------------------------------------------------------------------------
 *	
 *						WIMC_Def.h
 *
 *	WIMC 자료형 및 상수 정의용 헤더 파일
 *	- 수정일	: 2013년 10월  8일
 *	- 지원언어	: C/C++
 *	- 배포자	: WIKAN Co.
 *	- 홈페이지	: http://www.WIKAN.co.kr
 *
 * Copyright reserved. 
 *-------------------------------------------------------------------------*/

#ifndef __WIMC_DEF_HEADER
#define __WIMC_DEF_HEADER




////////////////////////////////////////////////////////////////////////////////
//
//						함수 호출 규약
//
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//
//#define WIMC_API				__cdecl
#define WIMC_API				__stdcall


//
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//
// WIMC 모션컨트롤러 코어 레지스터 정의
//
////////////////////////////////////////////////////////////////////////////////
// REGISTER NO
#define WIMC_CORE_R00						(0)
#define WIMC_CORE_R01						(1)
#define WIMC_CORE_R02						(2)
#define WIMC_CORE_R03						(3)
#define WIMC_CORE_R04						(4)
#define WIMC_CORE_R05						(5)
#define WIMC_CORE_R06						(6)
#define WIMC_CORE_R07						(7)
#define WIMC_CORE_R08						(8)
#define WIMC_CORE_R09						(9)
#define WIMC_CORE_R10						(10)
#define WIMC_CORE_R11						(11)
#define WIMC_CORE_R12						(12)
#define WIMC_CORE_R13						(13)
#define WIMC_CORE_R14						(14)
#define WIMC_CORE_R15						(15)
#define WIMC_CORE_R16						(16)
#define WIMC_CORE_R17						(17)
#define WIMC_CORE_R18						(18)
#define WIMC_CORE_R19						(19)
#define WIMC_CORE_R20						(20)
#define WIMC_CORE_R21						(21)
#define WIMC_CORE_R22						(22)
#define WIMC_CORE_R23						(23)
#define WIMC_CORE_R24						(24)
#define WIMC_CORE_R25						(25)
#define WIMC_CORE_R26						(26)
#define WIMC_CORE_R27						(27)
#define WIMC_CORE_R28						(28)
#define WIMC_CORE_R29						(29)
#define WIMC_CORE_R30						(30)
#define WIMC_CORE_R31						(31)

// REGISTER ALIAS = REGISTER NO                              	
#define WIMC_CORE_CHIPSET					WIMC_CORE_R00
#define WIMC_CORE_CHIPSTATUS				WIMC_CORE_R01
#define WIMC_CORE_AXISSET					WIMC_CORE_R02
#define WIMC_CORE_AXISSTATUS				WIMC_CORE_R03
#define WIMC_CORE_AXISAUXSET				WIMC_CORE_R04
#define WIMC_CORE_GEARRATIO					WIMC_CORE_R05
#define WIMC_CORE_CURPOS				 	WIMC_CORE_R06
#define WIMC_CORE_CAL0					 	WIMC_CORE_R07
#define WIMC_CORE_CAL1					   	WIMC_CORE_R08
#define WIMC_CORE_CAL2						WIMC_CORE_R09
#define WIMC_CORE_CAL3						WIMC_CORE_R10
#define WIMC_CORE_PULSEOFFSET				WIMC_CORE_R11
#define WIMC_CORE_ENCPOS					WIMC_CORE_R12
#define WIMC_CORE_SLIMITL					WIMC_CORE_R13
#define WIMC_CORE_SLIMITH					WIMC_CORE_R14
#define WIMC_CORE_VELAUXSET					WIMC_CORE_R15
#define WIMC_CORE_STARTVEL					WIMC_CORE_R16
#define WIMC_CORE_DRIVEVEL					WIMC_CORE_R17
#define WIMC_CORE_CURVEL					WIMC_CORE_R18
#define WIMC_CORE_ACC						WIMC_CORE_R19
#define WIMC_CORE_DEC						WIMC_CORE_R20
#define WIMC_CORE_ACC2						WIMC_CORE_R21
#define WIMC_CORE_DEC2						WIMC_CORE_R22
#define WIMC_CORE_FEEDBACK					WIMC_CORE_R23
#define WIMC_CORE_HOMERETURN				WIMC_CORE_R24
#define WIMC_CORE_COMPARE				 	WIMC_CORE_R25
#define WIMC_CORE_CALCULATOR				WIMC_CORE_R26
#define WIMC_CORE_PROGRAM					WIMC_CORE_R27
#define WIMC_CORE_SERVOIO					WIMC_CORE_R28
#define WIMC_CORE_GIO						WIMC_CORE_R29
#define WIMC_CORE_EXTIO						WIMC_CORE_R30
#define WIMC_CORE_CUSTOM					WIMC_CORE_R31
#define WIMC_CORE_IOCONTROL					WIMC_CORE_R31

//	레지스터 축
#define WIMC_REG_X							(0)
#define WIMC_REG_Y							(1)
#define WIMC_REG_Z							(2)
#define WIMC_REG_U							(3)
#define WIMC_REG_V							(4)
#define WIMC_REG_W							(5)
#define WIMC_REG_S1							(6)
#define WIMC_REG_S2							(7)

////////////////////////////////////////////////////////////////////////////////
//
//						자료형 정의
//
////////////////////////////////////////////////////////////////////////////////
typedef signed int							WIMC_BOOL;
typedef wchar_t								WIMC_CHAR;
typedef unsigned char						WIMC_UINT8;
typedef signed char							WIMC_INT8;
typedef unsigned short						WIMC_UINT16;
typedef short								WIMC_INT16;
typedef unsigned int						WIMC_UINT32;
typedef signed int							WIMC_INT32;
typedef unsigned __int64					WIMC_UINT64;
typedef signed __int64						WIMC_INT64;
typedef float								WIMC_FLOAT32;
typedef double								WIMC_FLOAT64;

////////////////////////////////////////////////////////////////////////////////
//
//	WIMC 일반정의
//
////////////////////////////////////////////////////////////////////////////////
#define	WIMC_FALSE							(0)
#define	WIMC_TRUE							(1)
#define WIMC_LEVEL_L						(0)		// LOW
#define WIMC_LEVEL_H						(1)		// HIGH

////////////////////////////////////////////////////////////////////////////////
//
//	WIMC 명령
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_IMCMD						(0x80)
#define WIMC_QUEUECMD					(0x00)

////////////////////////////////////////////////////////////////////////////////
//
//	WIMC 축 정의
//
////////////////////////////////////////////////////////////////////////////////
// 최대/최소
#define WIMC_AXIS_MAX					(8)
#define WIMC_SPINDLE_MAX				(2)

// 축
#define WIMC_NONE						(0)
#define WIMC_X							(0x01)
#define WIMC_Y							(0x02)
#define WIMC_Z							(0x04)
#define WIMC_U							(0x08)
#define WIMC_V							(0x10)
#define WIMC_W							(0x20)
#define WIMC_S1							(0x40)
#define WIMC_S2							(0x80)

#define WIMC_A							(0X08)
#define WIMC_B							(0X10)
#define WIMC_C							(0X20)
#define WIMC_S							(0x40|0x80)
#define WIMC_ALL						(0xff)
#define WIMC_AXIS_ALL					(0xff)

// X,Y,Z 합성축
#define WIMC_XY							(WIMC_X|WIMC_Y)
#define WIMC_XZ							(WIMC_X|WIMC_Z)
#define WIMC_YZ							(WIMC_Y|WIMC_Z)
#define WIMC_XYZ						(WIMC_X|WIMC_Y|WIMC_Z)

// U,V,W 합성축
#define WIMC_UV							(WIMC_U|WIMC_V)
#define WIMC_UW							(WIMC_U|WIMC_W)
#define WIMC_VW							(WIMC_V|WIMC_W)
#define WIMC_UVW						(WIMC_U|WIMC_V|WIMC_W)

#define WIMC_AB							WIMC_UV
#define WIMC_AC							WIMC_UW
#define WIMC_BC							WIMC_VW
#define WIMC_ABC						WIMC_UVW

// X,Y,Z,U 합성축
#define WIMC_XU							(WIMC_X	|WIMC_U)
#define WIMC_YU							(WIMC_Y	|WIMC_U)
#define WIMC_ZU							(WIMC_Z	|WIMC_U)
#define WIMC_XYU						(WIMC_XY |WIMC_U)
#define WIMC_XZU						(WIMC_XZ |WIMC_U)
#define WIMC_YZU						(WIMC_YZ |WIMC_U)
#define WIMC_XYZU						(WIMC_XYZ |WIMC_U)

#define WIMC_XA							WIMC_XU
#define WIMC_YA							WIMC_YU
#define WIMC_ZA							WIMC_ZU
#define WIMC_XYA						WIMC_XYU
#define WIMC_XZA						WIMC_YZU
#define WIMC_XYYA						WIMC_XYZU

// X,Y,Z,U,V 합성축
#define WIMC_XV							(WIMC_X|WIMC_V)
#define WIMC_YV							(WIMC_Y|WIMC_V)
#define WIMC_ZV							(WIMC_Z|WIMC_V)
#define WIMC_UV							(WIMC_U|WIMC_V)

#define WIMC_XYV						(WIMC_XY	|WIMC_V)
#define WIMC_XZV						(WIMC_XZ	|WIMC_V)
#define WIMC_XUV						(WIMC_XU	|WIMC_V)
#define WIMC_YZV						(WIMC_YZ	|WIMC_V)
#define WIMC_YUV						(WIMC_YU	|WIMC_V)
#define WIMC_ZUV						(WIMC_ZU	|WIMC_V)

#define WIMC_XYZV						(WIMC_XYZ	|WIMC_V)
#define WIMC_XYUV						(WIMC_XYU	|WIMC_V)
#define WIMC_XZUV						(WIMC_XZU	|WIMC_V)
#define WIMC_YZUV						(WIMC_YZU	|WIMC_V)

// 축번호
#define WIMC_AXISNO_X					(0)
#define WIMC_AXISNO_Y					(1)
#define WIMC_AXISNO_Z					(2)
#define WIMC_AXISNO_U					(3)
#define WIMC_AXISNO_V					(4)
#define WIMC_AXISNO_W					(5)
#define WIMC_AXISNO_S1					(6)
#define WIMC_AXISNO_S2					(7)

////////////////////////////////////////////////////////////////////////////////
//
//	입출력 포트 모드
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_INPORTMODE_NOPULLUP			(0)
#define WIMC_INPORTMODE_PULLUP				(1)
#define WIMC_OUTPORTMODE_OPENDRAIN			(0)
#define WIMC_OUTPORTMODE_OPENDRAIN_PULLUP	(1)
#define WIMC_OUTPORTMODE_TOTEMPOLE			(2)
#define WIMC_OUTPORTMODE_TOTEMPOLE_PULLUP	(3)


////////////////////////////////////////////////////////////////////////////////
//
// 스핀들 속도 고정 배율수
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_SPINDLE_VELMULTIPLIER		(16)

////////////////////////////////////////////////////////////////////////////////
//
// 명령 ID
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_CMDID_AUTO					0xff
#define WIMC_CMDID_NONE					0xfe
#define WIMC_CMDID_NOACK				0xfd		// ACK 응답필요없는 패킷일 때
#define WIMC_CMDID_RESET				0xfc		// POWER ON 등의 레지스터 초기화 작업용 id
#define WIMC_CMDID_NOCOMPLETE			0xfb

#define WIMC_CMDID_PARA					230			// 파라메터 설정(대표)
#define WIMC_CMDID_PARA0				230
#define WIMC_CMDID_PARA1				231
#define WIMC_CMDID_PARA2				232
#define WIMC_CMDID_PARA3				233
#define WIMC_CMDID_PARA4				234
#define WIMC_CMDID_PARA5				235
#define WIMC_CMDID_PARA6				236
#define WIMC_CMDID_PARA7				237
#define WIMC_CMDID_PARA8				238
#define WIMC_CMDID_PARA9				239
#define WIMC_CMDID_PARA10				240
#define WIMC_CMDID_PARA11				241
#define WIMC_CMDID_PARA12				242
#define WIMC_CMDID_PARA13				243
#define WIMC_CMDID_PARA14				244
#define WIMC_CMDID_PARA15				245

#define WIMC_CMDID_MOTIONWAIT			220			//모션 종료대기 (대표)
#define WIMC_CMDID_MOTIONWAIT0			220			//모션 종료대기 X축
#define WIMC_CMDID_MOTIONWAIT1			221			//모션 종료대기 Y축
#define WIMC_CMDID_MOTIONWAIT2			222			//모션 종료대기 Z축
#define WIMC_CMDID_MOTIONWAIT3			223			//모션 종료대기 U축
#define WIMC_CMDID_MOTIONWAIT4			224			//모션 종료대기 V축
#define WIMC_CMDID_MOTIONWAIT5			225			//모션 종료대기 W축
#define WIMC_CMDID_MOTIONWAIT6			226			//모션 종료대기 S1축
#define WIMC_CMDID_MOTIONWAIT7			227			//모션 종료대기 S2축

#define WIMC_CMDID_REGISTER				212			// 레지스터리드/라이트명령 대표
#define WIMC_CMDID_SYSTEM				211			// 시스템명령 대표
#define WIMC_CMDID_MOTION				210			// 일반모션명령 대표

#define WIMC_CMDID_STATE				202			// 상태타이머패킷, 리셋패킷, busy/complete/int/event, Notify DevInfo 상태패킷등에서 적용되는 ID
#define WIMC_CMDID_REFRESH				201			// 메인 타이머에서 레지스터 리플레시를 위한 id
#define WIMC_CMDID_USERMAX				0~200		// 200번까지는 사용자 임의 사용용 패킷id

////////////////////////////////////////////////////////////////////////////////
//
//		모션 컨트롤 모드
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_CTRLMODE_POS				0
#define WIMC_CTRLMODE_VEL				1	

////////////////////////////////////////////////////////////////////////////////
//
//		Busy동작 %
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_BUSYQUEUE_25P				0
#define WIMC_BUSYQUEUE_50P				1
#define WIMC_BUSYQUEUE_75P				2
#define WIMC_BUSYQUEUE_100P				3

////////////////////////////////////////////////////////////////////////////////
//
//		Interrupt 동작모드
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_INTERRUPTMODE_CHANGE_BYTE_R01		0
#define WIMC_INTERRUPTMODE_CHANGE_WORD_R01		1

////////////////////////////////////////////////////////////////////////////////
//
//		통신속도
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_MAINBPS_DEFAULT			0
#define WIMC_MAINBPS_115200				(115200UL)
#define WIMC_MAINBPS_230400				(230400UL)
#define WIMC_MAINBPS_460800				(460800UL)
#define WIMC_MAINBPS_921600				(921600UL)
#define WIMC_MAINBPS_MAX				WIMC_MAINBPS_921600

#define WIMC_AUXBPS_DEFAULT				0
#define WIMC_AUXBPS_115200				0
#define WIMC_AUXBPS_230400				1
#define WIMC_AUXBPS_460800				2
#define WIMC_AUXBPS_921600				3
#define WIMC_AUXBPS_MAX					3

////////////////////////////////////////////////////////////////////////////////
// 
//		전자기어비 안전범위
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_GEARRATIO_MIN				1
#define WIMC_GEARRATIO_MAX				+8388607L

////////////////////////////////////////////////////////////////////////////////
//
//		상태타이머 동작 옵션
//
////////////////////////////////////////////////////////////////////////////////
// 동작HZ
#define WIMC_STATETIMER_HZ						(0x0000000FUL)
#define WIMC_STATETIMER_STOP					(0x00000001UL)
#define WIMC_STATETIMER_25Hz					(0x00000002UL)
#define WIMC_STATETIMER_50Hz					(0x00000003UL)
#define WIMC_STATETIMER_100Hz					(0x00000004UL)
#define WIMC_STATETIMER_200Hz					(0x00000005UL)
#define WIMC_STATETIMER_250Hz					(0x00000006UL)
#define WIMC_STATETIMER_500Hz					(0x00000007UL)
#define WIMC_STATETIMER_1000Hz					(0x00000008UL)
// 전송방식
#define WIMC_STATETIMER_COMPRESSED				(0x00000001UL<<9)
// 전송정보
#define WIMC_STATETIMER_CHIPSTATUS				(0x00000001UL<<10)
#define WIMC_STATETIMER_AXISSTATUS				(0x00000001UL<<11)
#define WIMC_STATETIMER_CURPOSITION				(0x00000001UL<<12)
#define WIMC_STATETIMER_ENCPOSITION				(0x00000001UL<<13)
#define WIMC_STATETIMER_CURVELOCITY				(0x00000001UL<<14)
#define WIMC_STATETIMER_GIO						(0x00000001UL<<15)
// 사용자지정 전송정보
#define WIMC_STATETIMER_USER_REG				(0x0000002FUL<<16)
#define WIMC_STATETIMER_USER_R00				(0x00000001UL<<16)
#define WIMC_STATETIMER_USER_R01				(0x00000002UL<<16)
#define WIMC_STATETIMER_USER_R02				(0x00000003UL<<16)
#define WIMC_STATETIMER_USER_R03				(0x00000004UL<<16)
#define WIMC_STATETIMER_USER_R04				(0x00000005UL<<16)
#define WIMC_STATETIMER_USER_R05				(0x00000006UL<<16)
#define WIMC_STATETIMER_USER_R06				(0x00000007UL<<16)
#define WIMC_STATETIMER_USER_R07				(0x00000008UL<<16)
#define WIMC_STATETIMER_USER_R08				(0x00000009UL<<16)
#define WIMC_STATETIMER_USER_R09				(0x0000000aUL<<16)
#define WIMC_STATETIMER_USER_R10				(0x0000000bUL<<16)
#define WIMC_STATETIMER_USER_R11				(0x0000000cUL<<16)
#define WIMC_STATETIMER_USER_R12				(0x0000000dUL<<16)
#define WIMC_STATETIMER_USER_R13				(0x0000000eUL<<16)
#define WIMC_STATETIMER_USER_R14				(0x0000000fUL<<16)
#define WIMC_STATETIMER_USER_R15				(0x00000010UL<<16)
#define WIMC_STATETIMER_USER_R16				(0x00000011UL<<16)
#define WIMC_STATETIMER_USER_R17				(0x00000012UL<<16)
#define WIMC_STATETIMER_USER_R18				(0x00000013UL<<16)
#define WIMC_STATETIMER_USER_R19				(0x00000014UL<<16)
#define WIMC_STATETIMER_USER_R20				(0x00000015UL<<16)
#define WIMC_STATETIMER_USER_R21				(0x00000016UL<<16)
#define WIMC_STATETIMER_USER_R22				(0x00000017UL<<16)
#define WIMC_STATETIMER_USER_R23				(0x00000018UL<<16)
#define WIMC_STATETIMER_USER_R24				(0x00000019UL<<16)
#define WIMC_STATETIMER_USER_R25				(0x0000001aUL<<16)
#define WIMC_STATETIMER_USER_R26				(0x0000001bUL<<16)
#define WIMC_STATETIMER_USER_R27				(0x0000001cUL<<16)
#define WIMC_STATETIMER_USER_R28				(0x0000001dUL<<16)
#define WIMC_STATETIMER_USER_R29				(0x0000001eUL<<16)
#define WIMC_STATETIMER_USER_R30				(0x0000001fUL<<16)
#define WIMC_STATETIMER_USER_R31				(0x00000020UL<<16)

////////////////////////////////////////////////////////////////////////////////
//
//		위치 지정모드
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_POSMODE_REL						0
#define WIMC_POSMODE_ABS						1

////////////////////////////////////////////////////////////////////////////////
//
//		전자기어비 적용 위치표시
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_POSDISPMODE_IGNORE_GEAR			0
#define WIMC_POSDISPMODE_APPLY_GEAR				1

////////////////////////////////////////////////////////////////////////////////
//
//		비상 정지 
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_EMGSTOPMODE_DECSTOP				0
#define WIMC_EMGSTOPMODE_IMSTOP					1
#define WIMC_EXTEMGSTOPMODE_DECSTOP				0
#define WIMC_EXTEMGSTOPMODE_IMSTOP				1

////////////////////////////////////////////////////////////////////////////////
//
//		명령실행 종류
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_CMDSTATE_NORMAL				0
#define WIMC_CMDSTATE_SYNC					1
#define WIMC_CMDSTATE_WAIT					2
#define WIMC_CMDSTATE_DELAY					3

////////////////////////////////////////////////////////////////////////////////
//
//		축 펄스 모드
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_PULSEMODE_DISABLE			0
#define WIMC_PULSEMODE_PULSEDIR			1
#define WIMC_PULSEMODE_CWCCW			2


////////////////////////////////////////////////////////////////////////////////
//
//		소프트리미트 동작모드
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_SOFTLIMITMODE_DISABLE		0
#define WIMC_SOFTLIMITMODE_NOTIFY		1
#define WIMC_SOFTLIMITMODE_DECSTOP		2
#define WIMC_SOFTLIMITMODE_IMSTOP		3

////////////////////////////////////////////////////////////////////////////////
//
//		서보신호 동작옵션
//
////////////////////////////////////////////////////////////////////////////////
// Servo On
#define WIMC_SERVOONMODE_0				0
#define WIMC_SERVOONMODE_1				1
#define WIMC_SERVOONMODE_2				2
#define WIMC_SERVOONMODE_3				3

////////////////////////////////////////////////////////////////////////////////
//
//		속도설정 옵션
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_VELMODE_CONST				0
#define WIMC_VELMODE_LINEAR				1
#define WIMC_VELMODE_SCURVE				2
#define WIMC_VELMODE_LINEAR_CONST		3

////////////////////////////////////////////////////////////////////////////////
//
//		속도동작 상태
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_VELSTATE_STOP					0	// 정지상태
#define WIMC_VELSTATE_ACC					1	// 가속상태
#define WIMC_VELSTATE_DEC					2	// 감속상태
#define WIMC_VELSTATE_STEADY				3	// 정속유지상태

////////////////////////////////////////////////////////////////////////////////
//
//		모션동작 옵션
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_ARC_CW						WIMC_CW
#define WIMC_ARC_CCW					WIMC_CCW
#define WIMC_SPINDLE_OFF				WIMC_OFF
#define WIMC_SPINDLE_CW					WIMC_CW
#define WIMC_SPINDLE_CCW				WIMC_CCW

////////////////////////////////////////////////////////////////////////////////
//
//		원점복귀 동작설정 옵션
//
////////////////////////////////////////////////////////////////////////////////
// 모드
#define WIMC_HOMEMODE_0					0
#define WIMC_HOMEMODE_1					1
#define WIMC_HOMEMODE_2					2
// 방향
#define WIMC_HOMEDIR_MINUS				0
#define WIMC_HOMEDIR_PLUSE				1
// 자동위치제로
#define WIMC_HOMEZERO_NONE				0
#define WIMC_HOMEZERO_RETURN			1
#define WIMC_HOMEZERO_SENSOR			2
// 복귀오차펄스수
#define WIMC_HOMEALARM_PULSE_NONE		-1
#define WIMC_HOMEALARM_PULSE1			1
#define WIMC_HOMEALARM_PULSE2			2
#define WIMC_HOMEALARM_PULSE4			4
#define WIMC_HOMEALARM_PULSE8			8
#define WIMC_HOMEALARM_PULSE16			16
#define WIMC_HOMEALARM_PULSE32			32
#define WIMC_HOMEALARM_PULSE64			64
#define WIMC_HOMEALARM_PULSE128			128
#define WIMC_HOMEALARM_PULSE10			10
#define WIMC_HOMEALARM_PULSE20			20
#define WIMC_HOMEALARM_PULSE40			40
#define WIMC_HOMEALARM_PULSE80			80
#define WIMC_HOMEALARM_PULSE160			160
#define WIMC_HOMEALARM_PULSE320			320
#define WIMC_HOMEALARM_PULSE640			640
#define WIMC_HOMEALARM_PULSE1280		1280

////////////////////////////////////////////////////////////////////////////////
//
//		XMOVE 감속 및 정지조건
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_XMOVE_COND_HOMESENSOR	0x80000000UL
#define WIMC_XMOVE_COND_ENCZ		0x40000000UL
#define WIMC_XMOVE_COND_POS			0x20000000UL
#define WIMC_XMOVE_COND_SV_READY	0x01000000UL
#define WIMC_XMOVE_COND_SV_INPOS	0x02000000UL
#define WIMC_XMOVE_COND_SV_ALARM	0x04000000UL
#define WIMC_XMOVE_COND_SV_USERIN	0x05000000UL
#define WIMC_XMOVE_COND_GIN(io)		((io)&0x0000ffffUL)
#define WIMC_XMOVE_COND_GIN_0		0x00000001UL
#define WIMC_XMOVE_COND_GIN_1		0x00000002UL
#define WIMC_XMOVE_COND_GIN_2		0x00000004UL
#define WIMC_XMOVE_COND_GIN_3		0x00000008UL
#define WIMC_XMOVE_COND_GIN_4		0x00000010UL
#define WIMC_XMOVE_COND_GIN_5		0x00000020UL
#define WIMC_XMOVE_COND_GIN_6		0x00000040UL
#define WIMC_XMOVE_COND_GIN_7		0x00000080UL
#define WIMC_XMOVE_COND_GIN_8		0x00000100UL
#define WIMC_XMOVE_COND_GIN_9		0x00000200UL
#define WIMC_XMOVE_COND_GIN_10		0x00000400UL
#define WIMC_XMOVE_COND_GIN_11		0x00000800UL
#define WIMC_XMOVE_COND_GIN_12		0x00001000UL
#define WIMC_XMOVE_COND_GIN_13		0x00002000UL
#define WIMC_XMOVE_COND_GIN_14		0x00004000UL
#define WIMC_XMOVE_COND_GIN_15		0x00008000UL

////////////////////////////////////////////////////////////////////////////////
//
//		XDELAY 조건정의
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_XDELAY_ENABLE						(0x01UL<<31)
#define WIMC_XDELAY_ENABLE_ALARM				(0x01UL<<30)

#define WIMC_XDELAY_COND_CLEAR					(0)
#define WIMC_XDELAY_COND_SYNC					(0x01UL<<29)
#define WIMC_XDELAY_COND_HOME					(0x01UL<<28)
#define WIMC_XDELAY_COND_COMPLETE				(0x01UL<<27)
#define WIMC_XDELAY_COND_GIN					(0X01UL<<26)
#define WIMC_XDELAY_COND_GIN_INV_LEVEL			(0X01UL<<25)
#define WIMC_XDELAY_COND_GIN_OR					(0X00UL<<24)
#define WIMC_XDELAY_COND_GIN_AND				(0X01UL<<24)
#define WIMC_XDELAY_COND_VELSTEADY				(0x01UL<<23)
#define WIMC_XDELAY_COND_VELSTOP				(0x01UL<<22)

#define WIMC_XDELAY_COND_COMPARE_GE				(0x01UL<<20)
#define WIMC_XDELAY_COND_COMPARE_LE				(0x02UL<<20)
#define WIMC_XDELAY_COND_COMPARE_SCOPE			(0x03UL<<20)

#define WIMC_XDELAY_COND_COMPARE_TARGET_BYTE	(0x00UL<<16)
#define WIMC_XDELAY_COND_COMPARE_TARGET_WORDL	(0x01UL<<16)
#define WIMC_XDELAY_COND_COMPARE_TARGET_WORDH	(0x02UL<<16)
#define WIMC_XDELAY_COND_COMPARE_TARGET_LONG	(0x03UL<<16)

#define WIMC_XDELAY_COND_COMPARE_VALUE_BYTE		(0x00UL<<18)
#define WIMC_XDELAY_COND_COMPARE_VALUE_WORDL	(0x01UL<<18)
#define WIMC_XDELAY_COND_COMPARE_VALUE_WORDH	(0x02UL<<18)
#define WIMC_XDELAY_COND_COMPARE_VALUE_LONG		(0x03UL<<18)

#define WIMC_XDELAY_COND_COMPARE_X				0
#define WIMC_XDELAY_COND_COMPARE_Y				1
#define WIMC_XDELAY_COND_COMPARE_Z				2
#define WIMC_XDELAY_COND_COMPARE_U				3
#define WIMC_XDELAY_COND_COMPARE_V				4
#define WIMC_XDELAY_COND_COMPARE_W				5
#define WIMC_XDELAY_COND_COMPARE_S1				6
#define WIMC_XDELAY_COND_COMPARE_S2				7

#define WIMC_XDELAY_COND_COMPARE_POS			((WIMC_CORE_CURPOS<<3)|(WIMC_XDELAY_COND_COMPARE_TARGET_LONG))
#define WIMC_XDELAY_COND_COMPARE_ENC			((WIMC_CORE_ENCPOS<<3)|(WIMC_XDELAY_COND_COMPARE_TARGET_LONG))
#define WIMC_XDELAY_COND_COMPARE_VEL			((WIMC_CORE_CURVEL<<3)|(WIMC_XDELAY_COND_COMPARE_TARGET_WORDH))
#define WIMC_XDELAY_COND_COMPARE_VELAXIS		((WIMC_CORE_CURVEL<<3)|(WIMC_XDELAY_COND_COMPARE_TARGET_WORDL))

#define WIMC_XDELAY_COND_COMPARE_GIN			((WIMC_CORE_GIO<<3)		|(WIMC_XDELAY_COND_COMPARE_X))	|(WIMC_XDELAY_COND_COMPARE_TARGET_LONG))
#define WIMC_XDELAY_COND_COMPARE_ADC0			(((WIMC_CORE_GIO<<3)	|(WIMC_XDELAY_COND_COMPARE_Z))	|(WIMC_XDELAY_COND_COMPARE_TARGET_WORDL))
#define WIMC_XDELAY_COND_COMPARE_ADC1			(((WIMC_CORE_GIO<<3)	|(WIMC_XDELAY_COND_COMPARE_Z))	|(WIMC_XDELAY_COND_COMPARE_TARGET_WORDH))
#define WIMC_XDELAY_COND_COMPARE_ADC2			(((WIMC_CORE_GIO<<3)	|(WIMC_XDELAY_COND_COMPARE_U))	|(WIMC_XDELAY_COND_COMPARE_TARGET_WORDL))
#define WIMC_XDELAY_COND_COMPARE_ADC3			(((WIMC_CORE_GIO<<3)	|(WIMC_XDELAY_COND_COMPARE_U))	|(WIMC_XDELAY_COND_COMPARE_TARGET_WORDH))
#define WIMC_XDELAY_COND_COMPARE_GIOENC0		(((WIMC_CORE_EXTIO<<3)	|(WIMC_XDELAY_COND_COMPARE_X))	|(WIMC_XDELAY_COND_COMPARE_TARGET_LONG))
#define WIMC_XDELAY_COND_COMPARE_GIOENC1		(((WIMC_CORE_EXTIO<<3)	|(WIMC_XDELAY_COND_COMPARE_Y))	|(WIMC_XDELAY_COND_COMPARE_TARGET_LONG))
#define WIMC_XDELAY_COND_COMPARE_GIOCNT0		(((WIMC_CORE_GIO<<3)	|(WIMC_XDELAY_COND_COMPARE_Y))	|(WIMC_XDELAY_COND_COMPARE_TARGET_WORDL))
#define WIMC_XDELAY_COND_COMPARE_GIOCNT1		(((WIMC_CORE_GIO<<3)	|(WIMC_XDELAY_COND_COMPARE_Y))	|(WIMC_XDELAY_COND_COMPARE_TARGET_WORDH))

#define WIMC_XDELAY_COND_COMPARE_VALUE			(((WIMC_CORE_CHIPSET<<11)|(WIMC_AXISNO_X<<8))|(WIMC_XDELAY_COND_COMPARE_VALUE_LONG))

////////////////////////////////////////////////////////////////////////////////
//
//		비교기 동작설정 옵션
//
////////////////////////////////////////////////////////////////////////////////
#define WIMC_COMPARE_MODE_GE							1
#define WIMC_COMPARE_MODE_LE							2
#define WIMC_COMPARE_TRIGMODE_DISABLE					0
#define WIMC_COMPARE_TRIGMODE_LEVEL						1
#define WIMC_COMPARE_TRIGMODE_PULSE						2

////////////////////////////////////////////////////////////////////////////////
//
//		PID제어기
//
////////////////////////////////////////////////////////////////////////////////
typedef struct
{
	UINT16 SV;
	UINT16 K;
	UINT16 Ti;
	UINT16 Td;
	UINT16 Tc;
	UINT16 Taw;
	UINT16 Hys;
	UINT16 AL;
	UINT16 AH;
	UINT8 InputId;
	UINT8 OutputId;
	UINT8 OutputMode;
	UINT8 PolarOutport;
	INT32 Extra;
	UINT16 IL;
	UINT16 YMax;

} WIMC_PID_t;

////////////////////////////////////////////////////////////////////////////////
//
//		알람
//
////////////////////////////////////////////////////////////////////////////////
// 알람
#define WIMC_ALARMOPTION_EMGSTOPIMSTOP			(1<<4)
#define WIMC_ALARMOPTION_WDT					(1<<10)
#define WIMC_ALARMOPTION_IENDCOMP				(1<<12)
#define WIMC_ALARMOPTION_RECOVERREG				(1<<16)

#define WIMC_ALARM_PROCESS						(1<<0)
#define WIMC_ALARM_COMMAND						(1<<1)
#define WIMC_ALARM_INTERFACE					(1<<2)
#define WIMC_ALARM_SERVO						(1<<3)
#define WIMC_ALARM_EMGSTOP						(1<<4)
#define WIMC_ALARM_HOMERETURN					(1<<5)
#define WIMC_ALARM_LIMIT						(1<<6)
#define WIMC_ALARM_SOFTLIMIT					(1<<7)
#define WIMC_ALARM_AUXINTERFACE					(1<<8)
#define WIMC_ALARM_POSITION						(1<<9)
#define WIMC_ALARM_WDT							(1<<10)
#define WIMC_ALARM_PARAMETER					(1<<11)
#define WIMC_ALARM_IENDCOMP						(1<<12)
#define WIMC_ALARM_LINK							(1<<13)
#define WIMC_ALARM_MEMORY						(1<<14)
#define WIMC_ALARM_PROGRAM						(1<<15)

////////////////////////////////////////////////////////////////////////////////
//
//						Error List
//
////////////////////////////////////////////////////////////////////////////////
#define	WIMC_ERR_NONE						0
#define	WIMC_ERR							-1
#define	WIMC_ERR_INVALID_BOARD_ID			-10
#define WIMC_ERR_REALLOCATE_CMD_QUEUE		-11		// 명령큐 할당 실패
#define WIMC_ERR_NO_ROOM_FOR_BOARD			-20
#define	WIMC_ERR_NO_OPEN_BOARD				-21
#define	WIMC_ERR_OPEN_FAIL					-30
#define	WIMC_ERR_ALREADY_OPEN				-31
#define	WIMC_ERR_SAVE_CONFIG_FAIL			-40
#define	WIMC_ERR_LOAD_CONFIG_FAIL			-41
#define	WIMC_ERR_INVALID_PARA				-50
#define	WIMC_ERR_VELMODE					-100

#endif	//__WIMC_DEF_HEADER
