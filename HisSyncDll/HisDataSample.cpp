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


// 设置采集系统当前状态
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


// 添加孔板计量，根据参数指定流量计算机类型
void CHisDataSample::CreateOrificMeter(CMeter::OrificType nType)
{
	
}