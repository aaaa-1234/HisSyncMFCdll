#pragma once


// CValveSubItem �Ի���

class CValveSubItem : public CDialog
{
	DECLARE_DYNAMIC(CValveSubItem)

public:
	CValveSubItem(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CValveSubItem();

// �Ի�������
	enum { IDD = IDD_DIALOG_VALVE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
