// SmartMeter.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SmartMeter.h"
#include "afxdialogex.h"


// CSmartMeter �Ի���

IMPLEMENT_DYNAMIC(CSmartMeter, CDialog)

CSmartMeter::CSmartMeter(CWnd* pParent /*=NULL*/)
	: CDialog(CSmartMeter::IDD, pParent)
{

}

CSmartMeter::~CSmartMeter()
{
}

void CSmartMeter::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSmartMeter, CDialog)
END_MESSAGE_MAP()


// CSmartMeter ��Ϣ�������
