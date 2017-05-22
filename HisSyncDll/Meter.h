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
		//�װ�������
		nIsOrificType=0,
		//����������
		nIsSmartType
	};
	//�װ����������Ͷ���
	enum OrificType
	{
		//GE PC8���������
		nTypeGe=0,
		//���� LWJ���������
		nTypeLWJ=1,
		//���� RTU���������
		nTypeRTUkl=2
	};
	OrificType m_OrificType;
	//ֻ�����������Ͷ���
	enum SmartType
	{
		//�����Զ���Э��
		 nSmartType_TX_Def=0,
		//����Modbus������Э��
		nSmartType_TX_MBSignal,
		//����Modbus˫����Э��
		nSmartType_TX_MBDouble,
		//����Modbus�Զ���Э��
		nSmartType_TX_MBDef,
		//�����Զ���Э��
		nSmartType_CN_Def,
		//����Modbus������Э��
		nSmartType_CN_MBSignal,
		//����Modbus˫����Э��
		nSmartType_CN_MBDouble,
		//����Modbus�Զ���Э��
		nSmartType_CN_MBDef
	};
	SmartType m_SmartType;

	//���������������ر���
private:
	//����������
	MeterType m_nMeterType;
	//�����ƻ�·����
	CString m_strLoopName;
	//�����ƻ�·����
	CString m_strLoopDescription;

};

