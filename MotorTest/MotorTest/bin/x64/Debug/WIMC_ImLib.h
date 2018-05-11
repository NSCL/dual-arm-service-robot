/*-------------------------------------------------------------------------------------------------------------------------
 *	
 *						WIMC_ImLib.h
 *	
 *	WIMC 라이브러리 헤더 파일
 *	- 수정일	: 2013년 10월 8일
 *	- 지원언어	: C/C++
 *	- 배포자	: WIKAN Co.
 *	- 홈페이지	: http://www.WIKAN.co.kr
 *
 * Copyright reserved. 
 *-------------------------------------------------------------------------------------------------------------------------*/



#ifndef WIMC_IM_LIB_HEADER_FILE
#define WIMC_IM_LIB_HEADER_FILE

#include "WIMC_Def.h"

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef WIMC_DLL_EXPORT
	#define LIBSPEC __declspec(dllexport)
#else
	#define LIBSPEC __declspec(dllimport)
	//------------------------------------------------------------------------------
	//		Link Library
	//------------------------------------------------------------------------------
	#pragma comment( lib, "WIMC_ImLib.lib")

	//------------------------------------------------------------------------------
	//		Console window
	//------------------------------------------------------------------------------
	//#pragma comment(linker, "/entry:WinMainCRTStartup /subsystem:console")
#endif

//=============================================================================================================================
//
//
//												WIMC Library
//
//
//=============================================================================================================================


	//-------------------------------------------------------------------------------------------------------------------------
	// Gerneral
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Open_Comm							( WIMC_INT32 portNo, WIMC_INT32 baudrate );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Change_Comm_Baudrate				( WIMC_INT32 baurdrate );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Open_Tcp							( WIMC_UINT32 ip, WIMC_INT32 port, WIMC_INT32 baudrate );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Close								( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_BoardID						( WIMC_INT32 boardID );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_BoardID						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Load_wConfigFile					( WIMC_CHAR* pPathName );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Save_wConfigFile					( WIMC_CHAR* pPathName );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Load_ConfigFile					( char* pPathName );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Save_ConfigFile					( char* pPathName );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_Link							( void );
	LIBSPEC	void				WIMC_API	WIMC_Get_wDllVer						( WIMC_CHAR* pVerName, WIMC_INT32 numOfChar );
	LIBSPEC	void				WIMC_API	WIMC_Get_DllVer							( char* pVerName, WIMC_INT32 numOfChar );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_Err								( void );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_LastErr						( void );
	LIBSPEC	void				WIMC_API	WIMC_Enable_ErrBeep						( WIMC_BOOL bEnable );

	LIBSPEC void				WIMC_API	WIMC_Sleep								(WIMC_INT32 msec);

	//-------------------------------------------------------------------------------------------------------------------------
	// System Command
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Reset								( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_EStop								( WIMC_BOOL bImStop );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_ImStop								( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_DecStop							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_AlarmReset							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_Exe							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Pause								( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Resume								( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Cancel								( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// System State
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_EStop							( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_Pause							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_Alarm							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_EmgExe							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_EnableExe						( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Main / Aux com port
	//-------------------------------------------------------------------------------------------------------------------------
	// Main com
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Set_MainBaudrate					( WIMC_INT32 baudrate );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_MainBaudrate					( void );
	// Aux com
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Set_AuxBaudrate					( WIMC_INT32 baudrate );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_AuxBaudrate					( void );
	// Aux Com Options
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_AuxPortAllCommand			( WIMC_BOOL bEnable );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_AuxPortStatePacket			( WIMC_BOOL bEnable );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_AuxPortStateTimer			( WIMC_BOOL bEnable );
	// Update Baudrate
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Update_Baudrate					( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Estop
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ImStopDec						( WIMC_INT32 pps);
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_ImStopDec						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ExtEmgStopMode					( WIMC_INT32 mode );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_ExtEmgStopMode					( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Command ID
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_CmdID							( WIMC_INT32 id);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CmdID							( void );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_ExeCmdID						( void );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_ReadyCmdID						( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Queue
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	void				WIMC_API	WIMC_Enter_QueueCmd						( void );
	LIBSPEC	void				WIMC_API	WIMC_Leave_QueueCmd						( void );
	LIBSPEC	void				WIMC_API	WIMC_Enter_ImCmd						( void );
	LIBSPEC	void				WIMC_API	WIMC_Leave_ImCmd						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Reallocate_SoftQueue				( WIMC_INT32 queueSize );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_SoftQueueSize					( void );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CmdQueueLeftCmd				( void );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_SoftQueueLeftCmd				( void );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_EngineQueueLeftCmd				( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Clr_Queue							( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// State Packet
	//-------------------------------------------------------------------------------------------------------------------------
	// Busy
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_BusyStatePacket				( WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_BusyStatePacket					( void );
	LIBSPEC	void				WIMC_API	WIMC_Set_BusyStatePacketCount			( WIMC_UINT32 cnt );
	LIBSPEC	WIMC_UINT32			WIMC_API	WIMC_Get_BusyStatePacketCount			( void );
	// Complete
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_CompleteStatePacket			( WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_CompleteStatePacket				( void );
	LIBSPEC	void				WIMC_API	WIMC_Set_CompleteStatePacketCount		( WIMC_UINT32 cnt );
	LIBSPEC	WIMC_UINT32			WIMC_API	WIMC_Get_CompleteStatePacketCount		( void );
	// Interrupt
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_InterruptStatePacket		( WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_InterruptStatePacket			( void );
	LIBSPEC	void				WIMC_API	WIMC_Set_InterruptStatePacketCount		( WIMC_UINT32 cnt );
	LIBSPEC	WIMC_UINT32			WIMC_API	WIMC_Get_InterruptStatePacketCount		( void );
	// Event
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_EventStatePacket			( WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_EventStatePacket				( void );
	LIBSPEC	void				WIMC_API	WIMC_Set_EventStatePacketCount			( WIMC_UINT32 cnt );
	LIBSPEC	WIMC_UINT32			WIMC_API	WIMC_Get_EventStatePacketCount			( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Settings
	//-------------------------------------------------------------------------------------------------------------------------


	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_InportMode						( WIMC_INT32 mode);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_InportMode						( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_OutportMode					( WIMC_INT32 mode);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_OutportMode					( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_PosDispMode					( WIMC_INT32 mode);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_PosDispMode					( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_PosMode						( WIMC_INT32 mode );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_PosMode						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_BusySize						( WIMC_INT32 percent );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_BusySize						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_InterruptMode					( WIMC_INT32 mode );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_InterruptMode					( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ProcCmdNo						( WIMC_INT32 numOfCmd );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_ProcCmdNo						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_RestrictedImCmd				( WIMC_BOOL bEnable);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_RestrictedImCmd					( void ); 
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_IEndComp					( WIMC_BOOL bEnable);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_IEndComp						( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// StateTimer
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_StateTimer						( WIMC_UINT32 nFlags );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Clr_StateTimer						( WIMC_UINT32 nFlags );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_StateTimer						( WIMC_UINT32 nFlags );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_StateTimer						( WIMC_UINT32 nFlags );

	//-------------------------------------------------------------------------------------------------------------------------
	// Progress
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CurCmdPulse					( void );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CmdPulseMax					( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Scan Time
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_ScanTime						( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// CExe
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_CExe						( WIMC_BOOL bEnable );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_CExe							( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Step Exe
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_StepExe						( WIMC_BOOL bEnable );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_StepExe							( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Delay
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Delay								( WIMC_INT32 msec );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_XDelay								( WIMC_INT32 msec, WIMC_UINT32 cond, WIMC_UINT8 axis, WIMC_UINT32 comparePortMask, INT32 compareVal, INT32 compareValH );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CurDelayTime					( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Sync
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Sync								( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_Sync							( void );		// 외부 Sync signal

	//-------------------------------------------------------------------------------------------------------------------------
	// Wait
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	void				WIMC_API	WIMC_Wait								( void);

	//-------------------------------------------------------------------------------------------------------------------------
	// Wait Motion
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Enable_Notify_Complete				( WIMC_BOOL bEnable);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Notify_Complete					( WIMC_INT32 cmdId );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_WaitMotion							( WIMC_UINT8 motionId, WIMC_INT32 timeout);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Register_Complete_Message			( HWND h, UINT32 message);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Unregister_Complete_Message		( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// Command State
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CmdState						( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_PreparedCmd						( void);

	//-------------------------------------------------------------------------------------------------------------------------
	// Motion State
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_Busy							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_OnMotion						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_CompleteAxis					( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_Complete						( void );
	LIBSPEC	WIMC_UINT8			WIMC_API	WIMC_Get_VelState						( void );
	LIBSPEC	WIMC_UINT8			WIMC_API	WIMC_Get_VelStateAxis					( WIMC_UINT8 axis );

	//-------------------------------------------------------------------------------------------------------------------------
	// Axis Pulse
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_PulseMode						( WIMC_UINT8 axis, WIMC_INT32 mode);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_PulseMode						( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_PulseLevel						( WIMC_UINT8 axis, WIMC_BOOL bLevel);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Get_PulseLevel						( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_DirLevel						( WIMC_UINT8 axis, WIMC_BOOL bLevel);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Get_DirLevel						( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_CwLevel						( WIMC_UINT8 axis, WIMC_BOOL bLevel);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Get_CwLevel						( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_CcwLevel						( WIMC_UINT8 axis, WIMC_BOOL bLevel);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Get_CcwLevel						( WIMC_UINT8 axis);

	//-------------------------------------------------------------------------------------------------------------------------
	// Limit
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_LowerLimit					( WIMC_UINT8 axis, WIMC_BOOL bEnable);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_UpperLimit					( WIMC_UINT8 axis, WIMC_BOOL bEnable);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_IsEnable_LowerLimit				( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_IsEnable_UpperLimit				( WIMC_UINT8 axis);

	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_LowerLimitLevel				( WIMC_UINT8 axis,WIMC_BOOL bLevel);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Get_LowerLimitLevel				( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_UpperLimitLevel				( WIMC_UINT8 axis,WIMC_BOOL bLevel);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Get_UpperLimitLevel				( WIMC_UINT8 axis);

	//-------------------------------------------------------------------------------------------------------------------------
	// Soft Limit
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_SoftLimitMode					( WIMC_UINT8 axis, WIMC_INT32 mode);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_SoftLimitMode					( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_SoftLowerLimit					( WIMC_UINT8 axis, WIMC_INT32 pulse);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_SoftLowerLimit					( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_SoftUpperLimit					( WIMC_UINT8 axis, WIMC_INT32 pulse);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_SoftUpperLimit					( WIMC_UINT8 axis);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_SoftUpperLimit					( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_SoftLowerLimit				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_SoftUpperLimit				( WIMC_UINT8 axis, WIMC_BOOL bEnable );

	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_IsEnable_SoftLowerLimit			( WIMC_UINT8 axis);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_IsEnable_SoftUpperLimit			( WIMC_UINT8 axis);


	//-------------------------------------------------------------------------------------------------------------------------
	//
	//		속도 제어 설정
	//
	//-------------------------------------------------------------------------------------------------------------------------
	// 속도모드
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_VelMode						( WIMC_INT32 mode );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_VelMode						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_VelModeAxis					( WIMC_UINT8 axis, WIMC_INT32 mode );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_VelModeAxis					( WIMC_UINT8 axis );

	// 현재속도
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CurVel							( void);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CurVelAxis						( WIMC_UINT8 axis);

	// 구동속도
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_DriveVel						( WIMC_INT32 pps);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_DriveVel						( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_DriveVelAxis					( WIMC_UINT8 axis, WIMC_INT32 pps);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_DriveVelAxis					( WIMC_UINT8 axis );

	// 초속도 
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_StartVel						( WIMC_INT32 pps);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_StartVel						( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_StartVelAxis					( WIMC_UINT8 axis, WIMC_INT32 pps);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_StartVelAxis					( WIMC_UINT8 axis );

	// 1차 가속도
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_Acc							( WIMC_INT32 pps);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_Acc							( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_AccAxis						( WIMC_UINT8 axis, WIMC_INT32 pps );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_AccAxis						( WIMC_UINT8 axis );

	// 1차 감속도
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_Dec							( WIMC_INT32 pps);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_Dec							( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_DecAxis						( WIMC_UINT8 axis, WIMC_INT32 pps );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_DecAxis						( WIMC_UINT8 axis );

	// 2차 가속도
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_Acc2							( WIMC_INT32 pps);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_Acc2							( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_Acc2Axis						( WIMC_UINT8 axis, WIMC_INT32 pps );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_Acc2Axis						( WIMC_UINT8 axis );

	// 2차 감속도
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_Dec2							( WIMC_INT32 pps);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_Dec2							( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_Dec2Axis						( WIMC_UINT8 axis, WIMC_INT32 pps );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_Dec2Axis						( WIMC_UINT8 axis );

	//-------------------------------------------------------------------------------------------------------------------------
	//
	//		속도 동작 옵션설정
	//
	//-------------------------------------------------------------------------------------------------------------------------
	// 속도 배율수
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_VelMultiplier					( WIMC_INT32 multiplier);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_VelMultiplier					( void);

	//	선속도 일정기능(CLV : Constant Linear Velocity)
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_CLV							( WIMC_BOOL bEnable );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_CLV								( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_CLVAxis						( WIMC_UINT8 axis);
	LIBSPEC	WIMC_UINT8			WIMC_API	WIMC_Get_CLVAxis						( void);

	// 속도 오버라이딩
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_VelOverride					( WIMC_FLOAT64 percentage );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_VelOverride					( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_S1VelOverride					( WIMC_FLOAT64 percentage );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_S1VelOverride					( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_S2VelOverride					( WIMC_FLOAT64 percentage );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_S2VelOverride					( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Lock_VelOverride					( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Unlock_VelOverride					( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_Lock_VelOverride				( void );

	// 드웰타임
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_DwellTime						( WIMC_INT32 msec );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_DwellTime						( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_DwellTimeAxis				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_DwellTimeAxis					( WIMC_UINT8 axis, WIMC_INT32 msec );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_DwellTimeAxis					( WIMC_UINT8 axis );
	
	// 속도제어 주파수
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_VelCtrlHz						( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_VelCtrlHz						( WIMC_INT32 hz);

	// 속도강제수렴
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_VelForceConvergence			( WIMC_BOOL bEnable);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_VelForceConvergence				( void);

	// 피드포워드제어기능 FFC(Feed Forward Control)
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_FFC							( WIMC_BOOL bEnable);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_FFC								( void);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_FFC_PMax						( WIMC_INT32 p);

	// Automatic transistion속도/위치제어 자동절환
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_VelPosAutoTransition			( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_VelPosAutoTransition		( WIMC_UINT8 axis, WIMC_BOOL bEnable);

	//-------------------------------------------------------------------------------------------------------------------------
	//
	//		위치 제어
	//
	//-------------------------------------------------------------------------------------------------------------------------
	// Current Position
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_CurPos							( WIMC_UINT8 axis, WIMC_INT32 pulse);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_CurPos							( WIMC_UINT8 axis);

	// Encoder
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_EncPos							( WIMC_UINT8 axis, WIMC_INT32 pos);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_EncPos							( WIMC_UINT8 axis);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_EncZCount						( WIMC_UINT8 axis);

	// Gear
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_GearRatio						( WIMC_UINT8 axis, WIMC_INT32 gearRatio );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_GearRatio						( WIMC_UINT8 axis );

	// Backlash
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_Backlash					( WIMC_UINT8 axis, WIMC_BOOL bEnable);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_Backlash						( WIMC_UINT8 axis, WIMC_INT32 pulse);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_Backlash						( WIMC_UINT8 axis);
	
	//-------------------------------------------------------------------------------------------------------------------------
	// 보간명령
	//-------------------------------------------------------------------------------------------------------------------------
	// 직선보간
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Line								( WIMC_UINT8 axis, WIMC_INT32 pulse[] );
	// 원호보간
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_ArcCCW 							( WIMC_UINT8 axis, WIMC_INT32 centerPos[], WIMC_INT32 endPos[] );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_ArcCW 								( WIMC_UINT8 axis, WIMC_INT32 centerPos[], WIMC_INT32 endPos[] );
	// 비트패턴
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_BitPattern							( WIMC_UINT8 axis, WIMC_INT32 bitPatternData[][8], WIMC_INT32 bitPatternNo );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_BPU							( WIMC_INT32 pulse );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_BPU							( void );
	// 원점복귀
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Home								( WIMC_UINT8 axis, WIMC_INT32 pulseMax );
	
	//-------------------------------------------------------------------------------------------------------------------------
	// 다중보간
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_MI							( WIMC_BOOL bEnable) ;
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_MI								( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_MIExe								( void );

	//-------------------------------------------------------------------------------------------------------------------------
	// 개별축동작명령
	//-------------------------------------------------------------------------------------------------------------------------
	// 독립이송
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_IMove								( WIMC_UINT8 axis, WIMC_INT32 pulse[] );
	// 연속이송
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_CMove								( WIMC_UINT8 axis, WIMC_INT32 pulseMax[]);
	// 조건이송
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_XMove								( WIMC_UINT8 axis, WIMC_INT32 pos, WIMC_UINT32 decCond, WIMC_UINT32 stopCond, WIMC_INT32 decVel, WIMC_INT32 decPos );
	// 스핀들회전
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Spindle							( WIMC_UINT8 axis, WIMC_INT32 pps );
	// 원점복귀
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_IHome								( WIMC_UINT8 axis, WIMC_INT32 pulseMax[]);

	//-------------------------------------------------------------------------------------------------------------------------
	// 원점복귀 옵션
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_HomeMode						( WIMC_UINT8 axis, WIMC_INT32 mode );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_HomeMode						( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_HomeDev						( WIMC_UINT8 axis, WIMC_INT32 dev );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_HomeDev						( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_HomeDir						( WIMC_UINT8 axis, WIMC_BOOL bDir );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeDir							( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_HomeSeekOffsetPulse			( WIMC_UINT8 axis, WIMC_INT32 pulse );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_HomeSeekOffsetPulse			( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_HomeSeekVel					( WIMC_UINT8 axis, WIMC_INT32 pps );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_HomeSeekVel					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_HomeSensorLevel				( WIMC_UINT8 axis, WIMC_BOOL bLevel );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeSensorLevel					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_HomeReturnAutoZero			( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeReturnAutoZero				( WIMC_UINT8 axis );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Enable_HomeSensorAutoZero			( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeSensorAutoZero				( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_HomeServoReset				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeServoReset					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_HomeDevAlarm				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeDevAlarm					( WIMC_UINT8 axis );

	//-------------------------------------------------------------------------------------------------------------------------
	// 축 상태(2016/2)
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeReturnExe					( WIMC_UINT8 axis );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeReturnAlarm					( WIMC_UINT8 axis );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_HomeSensor						( WIMC_UINT8 axis );

	LIBSPEC WIMC_INT32			WIMC_API	WIMC_GetVelStateAxis					(WIMC_UINT8 axis); // 속도 상태= VELSTATE_[STOP/ACC/STEADY/DEC]
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsLimitL							(WIMC_UINT8 axis); // 하한 리미트 검사
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsLimitH							(WIMC_UINT8 axis); // 상한 리미트 검사
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsSoftLimitL						(WIMC_UINT8 axis); // 하한 소프트 리미트 검사
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsSoftLimitH						(WIMC_UINT8 axis); // 상한 소프트 리미트 검사
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsCW								(WIMC_UINT8 axis); 
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsCCW								(WIMC_UINT8 axis);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsAlarmAxis						(WIMC_UINT8 axis);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsPositionAlarm					(WIMC_UINT8 axis);
	//LIBSPEC WIMC_BOOL			WIMC_API	WIMC_GetCtrlMode						(WIMC_UINT8 axis); // 속도모드(전용회전모드)/위치모드
	//LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsCtrlModeTrans					(WIMC_UINT8 axis); // "속도모드->위치모드 시 변환중이다." 확인
	//LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsReqStopRotate					(WIMC_UINT8 axis);
	//LIBSPEC WIMC_BOOL			WIMC_API	WIMC_GetReqPosCtrlCnt					(WIMC_UINT8 axis);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsComplete							(WIMC_UINT8 axis); // 해당 축의 모션동작 완료 확인

	//-------------------------------------------------------------------------------------------------------------------------
	// 알람 상태(2016/2)
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_IsAlarm							(void);
	LIBSPEC WIMC_UINT32			WIMC_API	WIMC_GetAlarm							(void);

	//-------------------------------------------------------------------------------------------------------------------------
	// SERVO
	//-------------------------------------------------------------------------------------------------------------------------
	// Sv.On
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_ServoOnAuto					( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoOnAuto						( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoOnLevel					( WIMC_UINT8 axis, WIMC_BOOL bLevel );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoOnLevel					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoOnMode					( WIMC_UINT8 axis, WIMC_INT32 mode );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_ServoOnMode					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoOn						( WIMC_UINT8 axis, WIMC_BOOL bOn );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_ServoOn							( WIMC_UINT8 axis );
	// Sv.Reset
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_ServoResetAuto				( WIMC_UINT8 axis, WIMC_BOOL bEnable);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoResetAuto					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoResetLevel				( WIMC_UINT8 axis, WIMC_BOOL bLevel);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoResetLevel					( WIMC_UINT8 aixs );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Set_ServoPulseTime					( WIMC_UINT8 axis, WIMC_INT32 msec);
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_ServoPulseTime					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoReset						( WIMC_UINT8 axis, WIMC_BOOL bOn);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_ServoReset						( WIMC_UINT8 axis);
	// Sv.EStop
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_ServoEStopAuto				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoEStopAuto					( WIMC_UINT8 axis );		
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoEStopLevel				( WIMC_UINT8 axis, WIMC_BOOL bLevel );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoEStopLevel					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoEStop						( WIMC_UINT8 axis, WIMC_BOOL bOn );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_ServoEStop						( WIMC_UINT8 axis );
	// Sv.UserOut
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Enable_ServoUserOutAuto			( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoUserOutAuto				( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoUserOutLevel				( WIMC_UINT8 axis, WIMC_BOOL bLevel) ;
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoUserOutLevel				( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoUserOut					( WIMC_UINT8 axis, WIMC_BOOL bOn );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_ServoUserOut					( WIMC_UINT8 axis );
	// Sv.Ready
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_ServoReadyAuto				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoReadyAuto					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoReadyLevel				( WIMC_UINT8 axis, WIMC_BOOL bLevel );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoReadyLevel					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_ServoReady						( WIMC_UINT8 axis );
	// Sv.Inpos
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_ServoInposAuto				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoInposAuto					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_ServoInposAlarm				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoInposAlarm					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoInposLevel				( WIMC_UINT8 axis, WIMC_BOOL bLevel );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoInposLevel					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoInposTime					( WIMC_UINT8 axis, WIMC_INT32 msec );
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_ServoInposTime					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_ServoInpos						( WIMC_UINT8 axis );
	// Sv.Alarm
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_ServoAlarmAuto				( WIMC_UINT8 axis, WIMC_BOOL bEnable );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoAlarmAuto					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoAlarmLevel				( WIMC_UINT8 axis, WIMC_BOOL bLevel );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoAlarmLevel					( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_ServoAlarm						( WIMC_UINT8 axis );
	// Sv.UserIn
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_ServoUserInLevel				( WIMC_UINT8 axis, WIMC_BOOL bLevel);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ServoUserInLevel				( WIMC_UINT8 axis );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_ServoUserIn						( WIMC_UINT8 axis);

	//-------------------------------------------------------------------------------------------------------------------------
	// GIO 
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_UINT32			WIMC_API	WIMC_Get_GIn							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_GOut							( WIMC_UINT32 val);
	LIBSPEC WIMC_UINT32			WIMC_API	WIMC_Get_GOut							( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_SetBit_GOut						( WIMC_UINT32 setMask);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_ClrBit_GOut						( WIMC_UINT32 clrMask);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Pulse_GOut							( WIMC_UINT32 pulseMask);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_GIOUpCounter					( WIMC_INT32 ch, WIMC_INT32 val);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_GIOUpCounter					( WIMC_INT32 ch);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_GIOEncoder					( WIMC_INT32 ch,  WIMC_BOOL bEnable);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_GIOEncoder						( WIMC_INT32 ch, WIMC_INT32 val);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_GIOEncoder						( WIMC_INT32 ch);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_ADC							( WIMC_INT32 ch);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_PWM							( WIMC_INT32 ch, WIMC_INT32 PeriodCnt, WIMC_INT32 DutyCnt);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_PWMPeriodCount					( WIMC_INT32 ch);
	LIBSPEC	WIMC_INT32			WIMC_API	WIMC_Get_PWMDutyCount					( WIMC_INT32 ch);

	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Set_GIOPattern						(WIMC_UINT32 bitSize, WIMC_UINT8 patternBuf[]);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Clr_GIOPattern						(WIMC_BOOL end_level);

	//-------------------------------------------------------------------------------------------------------------------------
	// EXTEND IO
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Enable_ExtIO						( WIMC_BOOL bEnable);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Enable_ExtServoIO					( WIMC_BOOL bEnable);
	LIBSPEC WIMC_UINT32			WIMC_API	WIMC_Get_ExtIO_Link_Status				( WIMC_INT32 ch );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ExtIO_Link0						( WIMC_INT32 ch );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ExtIO_Link1						( WIMC_INT32 ch );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ExtIO_Link2						( WIMC_INT32 ch );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_ExtIO_Link3						( WIMC_INT32 ch );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Reset_ExtIO						( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_EmgStop_ExtIO						( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Restart_ExtIO						( void );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Set_ExtIO							( WIMC_INT32 ch, WIMC_UINT32 val);
	LIBSPEC WIMC_UINT32			WIMC_API	WIMC_Get_ExtIO							( WIMC_INT32 ch );
	LIBSPEC WIMC_UINT32			WIMC_API	WIMC_Get_ExtIO_MPG_Status				( void );
	LIBSPEC WIMC_INT32			WIMC_API	WIMC_Get_ExtIO_MPG_Count				( void );

	//-------------------------------------------------------------------------------------------------------------------------
	//		비교기
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Enable_Comparator					( WIMC_INT32 ch,  WIMC_BOOL bEnable);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Register_Comparator_Message		( HWND h, WIMC_UINT32 message );
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Unregister_Comparator_Message		( void );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_PosComparator					( WIMC_INT32 ch, WIMC_UINT8 compareMode, WIMC_UINT8 axis, WIMC_INT32 comparePos, WIMC_UINT8 trigMode, WIMC_BOOL enableEvent );
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_PosComparatorX					( WIMC_INT32 ch, WIMC_UINT8 compareMode, WIMC_UINT8 axis, WIMC_INT32 comparePos, WIMC_UINT8 trigMode, WIMC_INT32 offsetPos, WIMC_UINT32 iteration, WIMC_BOOL enableEvent );

	//-------------------------------------------------------------------------------------------------------------------------
	//		PID
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Off_PID							( WIMC_INT32 ch);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Reset_PID							( WIMC_INT32 ch);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Run_PID							( WIMC_INT32 ch);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Setup_PID							( WIMC_INT32 ch, WIMC_PID_t *ptPid);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Set_PIDSV							( WIMC_INT32 ch, WIMC_INT32 val);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Is_PID_On							( WIMC_INT32 ch);
	LIBSPEC WIMC_BOOL			WIMC_API	WIMC_Get_PID_Setup						( WIMC_INT32 ch, WIMC_PID_t *ptPid);

	//-------------------------------------------------------------------------------------------------------------------------
	// ALARM
	//-------------------------------------------------------------------------------------------------------------------------
	LIBSPEC	WIMC_UINT32			WIMC_API	WIMC_Get_Alarm							( void);
	LIBSPEC	void				WIMC_API	WIMC_Clr_AlarmOption					( WIMC_UINT32 nFlags);
	LIBSPEC	void				WIMC_API	WIMC_Set_AlarmOption					( WIMC_UINT32 nFlags);
	LIBSPEC WIMC_UINT32			WIMC_API	WIMC_Get_AlarmOption					( void);
	LIBSPEC	void				WIMC_API	WIMC_Enable_StopRotateByAlarm			( WIMC_UINT8 axis, WIMC_BOOL bEnable);
	LIBSPEC	WIMC_BOOL			WIMC_API	WIMC_Is_StopRotateByAlarm				( WIMC_UINT8 axis);


#ifdef __cplusplus
};
#endif



#endif