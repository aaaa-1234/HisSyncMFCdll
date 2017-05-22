#pragma once


// CAnalogSubItem 对话框

class CAnalogSubItem : public CDialog
{
	DECLARE_DYNAMIC(CAnalogSubItem)

public:
	CAnalogSubItem(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CAnalogSubItem();

// 对话框数据
	enum { IDD = IDD_DIALOG_ANALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
