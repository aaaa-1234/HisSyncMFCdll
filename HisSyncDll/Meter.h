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
		//GE PC8���������
		nTypeGe=0,
		//���� LWJ���������
		nTypeLWJ=1,
		//���� RTU���������
		nTypeRTUkl=2
	};
	OrificType m_OrificType;
};

