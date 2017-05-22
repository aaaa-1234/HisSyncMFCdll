// ValveSubItem.cpp : 实现文件
//

#include "stdafx.h"
#include "ValveSubItem.h"
#include "afxdialogex.h"


// CValveSubItem 对话框

IMPLEMENT_DYNAMIC(CValveSubItem, CDialog)

CValveSubItem::CValveSubItem(CWnd* pParent /*=NULL*/)
	: CDialog(CValveSubItem::IDD, pParent)
{

}

CValveSubItem::~CValveSubItem()
{
}

void CValveSubItem::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CValveSubItem, CDialog)
END_MESSAGE_MAP()


// CValveSubItem 消息处理程序
