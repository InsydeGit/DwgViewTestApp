
// DwgViewTestAppDlg.h : header file
//

#pragma once
#include "CDWGVIEWXCTRL2.h"


// CDwgViewTestAppDlg dialog
class CDwgViewTestAppDlg : public CDialogEx
{
// Construction
public:
	CDwgViewTestAppDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DWGVIEWTESTAPP_DIALOG };
#endif

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
	DECLARE_EVENTSINK_MAP()
	void MouseDownDwgviewxctrl2(short Button, short Shift, long x, long y);
	CDWGVIEWXCTRL2 TestViewer;
	afx_msg void OnBnClickedButton1();
	void HandleViewerError();
	afx_msg void OnBnClickedButton2();
};
