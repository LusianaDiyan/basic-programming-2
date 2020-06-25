
// jamanalog_sem2Dlg.h : header file
//

#pragma once


// Cjamanalog_sem2Dlg dialog
class Cjamanalog_sem2Dlg : public CDialogEx
{
// Construction
public:
	Cjamanalog_sem2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_JAMANALOG_SEM2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	bool default_jam = TRUE;
	bool UpdateJam = TRUE;
	afx_msg void OnBnClickedReset();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedSet();
	afx_msg void OnBnClickedStart();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnEnChangeJam();
	afx_msg void OnEnChangeMenit();
	afx_msg void OnEnChangeDetik();
};
