// SmartMeter.cpp : 实现文件
//

#include "stdafx.h"
#include "SmartMeter.h"
#include "afxdialogex.h"


// CSmartMeter 对话框

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


// CSmartMeter 消息处理程序
