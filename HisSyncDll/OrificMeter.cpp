// OrificMeter.cpp : 实现文件
//

#include "stdafx.h"
#include "OrificMeter.h"
#include "afxdialogex.h"


// COrificMeter 对话框

IMPLEMENT_DYNAMIC(COrificMeter, CDialog)

COrificMeter::COrificMeter(CWnd* pParent /*=NULL*/)
	: CDialog(COrificMeter::IDD, pParent)
{

}

COrificMeter::~COrificMeter()
{
}

void COrificMeter::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COrificMeter, CDialog)
END_MESSAGE_MAP()


// COrificMeter 消息处理程序
