// AnalogSubItem.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AnalogSubItem.h"
#include "afxdialogex.h"


// CAnalogSubItem �Ի���

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


// CAnalogSubItem ��Ϣ�������
