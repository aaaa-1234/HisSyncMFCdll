#pragma once


// CAnalogSubItem �Ի���

class CAnalogSubItem : public CDialog
{
	DECLARE_DYNAMIC(CAnalogSubItem)

public:
	CAnalogSubItem(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CAnalogSubItem();

// �Ի�������
	enum { IDD = IDD_DIALOG_ANALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
