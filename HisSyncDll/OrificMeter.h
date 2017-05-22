#pragma once


// COrificMeter 对话框

class COrificMeter : public CDialog
{
	DECLARE_DYNAMIC(COrificMeter)

public:
	COrificMeter(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~COrificMeter();

// 对话框数据
	enum { IDD = IDD_DIALOG_ORIFIC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
