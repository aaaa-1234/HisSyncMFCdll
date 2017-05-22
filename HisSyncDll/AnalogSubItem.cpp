// AnalogSubItem.cpp : 实现文件
//

#include "stdafx.h"
#include "AnalogSubItem.h"
#include "afxdialogex.h"


// CAnalogSubItem 对话框

IMPLEMENT_DYNAMIC(CAnalogSubItem, CDialog)

CAnalogSubItem::CAnalogSubItem(CWnd* pParent /*=NULL*/)
	: CDialog(CAnalogSubItem::IDD, pParent)
{

}

CAnalogSubItem::~CAnalogSubItem()
{
}

void CAnalogSubItem::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAnalogSubItem, CDialog)
END_MESSAGE_MAP()


// CAnalogSubItem 消息处理程序
