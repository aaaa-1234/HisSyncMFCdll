#pragma once


// CValveSubItem 对话框

class CValveSubItem : public CDialog
{
	DECLARE_DYNAMIC(CValveSubItem)

public:
	CValveSubItem(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CValveSubItem();

// 对话框数据
	enum { IDD = IDD_DIALOG_VALVE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
