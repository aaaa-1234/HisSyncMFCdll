#pragma once


// CSmartMeter �Ի���

class CSmartMeter : public CDialog
{
	DECLARE_DYNAMIC(CSmartMeter)

public:
	CSmartMeter(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSmartMeter();

// �Ի�������
	enum { IDD = IDD_DIALOG_SMART };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
