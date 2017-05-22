#include "StdAfx.h"
#include "Meter.h"


CMeter::CMeter(void)
	: m_OrificType(nTypeGe)
	, m_SmartType(nSmartType_TX_Def)
	, m_nMeterType(nIsOrificType)
	, m_strLoopName(_T(""))
	, m_strLoopDescription(_T(""))
{
}


CMeter::~CMeter(void)
{
}
