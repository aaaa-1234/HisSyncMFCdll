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
	// 设置采集系统当前状态
	void SetCurrentStatus(SampleSystemStatus sysStatus);
	unsigned int GetCurrentStatus(void);

private:
	// 标识当前自身为master或者slave，
	SampleSystemStatus m_nCurrentStatus;
	CMutex vStatusMutex;

public:
	// 添加孔板计量，根据参数指定流量计算机类型
	void CreateOrificMeter(CMeter::OrificType nType);
};

