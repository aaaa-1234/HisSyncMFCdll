#pragma once
#include "afx.h"

class AFX_EXT_CLASS CMeter :
	public CObject
{
public:
	CMeter(void);
	~CMeter(void);
public:
	enum MeterType
	{
		//孔板流量计
		nIsOrificType=0,
		//智能流量计
		nIsSmartType
	};
	//孔板流量计类型定义
	enum OrificType
	{
		//GE PC8流量计算机
		nTypeGe=0,
		//国光 LWJ流量计算机
		nTypeLWJ=1,
		//科连 RTU流量计算机
		nTypeRTUkl=2
	};
	OrificType m_OrificType;
	//只能流量计类型定义
	enum SmartType
	{
		//天信自定义协议
		 nSmartType_TX_Def=0,
		//天信Modbus单精度协议
		nSmartType_TX_MBSignal,
		//天信Modbus双精度协议
		nSmartType_TX_MBDouble,
		//天信Modbus自定义协议
		nSmartType_TX_MBDef,
		//苍南自定义协议
		nSmartType_CN_Def,
		//苍南Modbus单精度协议
		nSmartType_CN_MBSignal,
		//苍南Modbus双精度协议
		nSmartType_CN_MBDouble,
		//苍南Modbus自定义协议
		nSmartType_CN_MBDef
	};
	SmartType m_SmartType;

	//定义流量计算机相关变量
private:
	//流量计类型
	MeterType m_nMeterType;
	//流量计回路名称
	CString m_strLoopName;
	//流量计回路描述
	CString m_strLoopDescription;

};

