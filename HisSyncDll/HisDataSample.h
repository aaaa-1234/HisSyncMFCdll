#pragma once
#include "afx.h"
#include "Meter.h"

class AFX_EXT_CLASS CHisDataSample :
	public CObject
{
public:
	CHisDataSample(void);
	~CHisDataSample(void);

public:
	enum SampleSystemStatus
	{
		sysMasterStatus=1,
		sysSalveStatus=0
	};
public:
	// ���òɼ�ϵͳ��ǰ״̬
	void SetCurrentStatus(SampleSystemStatus sysStatus);
	unsigned int GetCurrentStatus(void);

private:
	// ��ʶ��ǰ����Ϊmaster����slave��
	SampleSystemStatus m_nCurrentStatus;
	CMutex vStatusMutex;

public:
	// ��ӿװ���������ݲ���ָ���������������
	void CreateOrificMeter(CMeter::OrificType nType);
};

