#pragma once


// CSmartMeter 对话框

class CSmartMeter : public CDialog
{
	DECLARE_DYNAMIC(CSmartMeter)

public:
	CSmartMeter(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSmartMeter();

// 对话框数据
	enum { IDD = IDD_DIALOG_SMART };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
