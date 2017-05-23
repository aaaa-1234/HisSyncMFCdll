#include "StdAfx.h"
#include "HisDataSample.h"
#include "CppSQLite3.h"

CHisDataSample::CHisDataSample(void)
	: m_nCurrentStatus(sysSalveStatus)
{
}


CHisDataSample::~CHisDataSample(void)
{
}


// ���òɼ�ϵͳ��ǰ״̬
void CHisDataSample::SetCurrentStatus(SampleSystemStatus sysStatus)
{
	CSingleLock SingleStatus(&vStatusMutex);
	SingleStatus.Lock();

	m_nCurrentStatus = sysStatus;
}

unsigned int CHisDataSample::GetCurrentStatus()
{
	CSingleLock SingleStatus(&vStatusMutex);
	SingleStatus.Lock();

	return m_nCurrentStatus;
}


// ��ӿװ���������ݲ���ָ���������������
void CHisDataSample::CreateOrificMeter(CMeter::OrificType nType)
{
	
}