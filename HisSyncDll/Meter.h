#pragma once
#include "afx.h"

class AFX_EXT_CLASS CMeter :
	public CObject
{
public:
	CMeter(void);
	~CMeter(void);
public:
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
};

