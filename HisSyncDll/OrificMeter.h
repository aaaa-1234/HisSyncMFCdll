#pragma once


// COrificMeter �Ի���

class COrificMeter : public CDialog
{
	DECLARE_DYNAMIC(COrificMeter)

public:
	COrificMeter(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~COrificMeter();

// �Ի�������
	enum { IDD = IDD_DIALOG_ORIFIC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
