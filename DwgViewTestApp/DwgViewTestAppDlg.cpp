
// DwgViewTestAppDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "DwgViewTestApp.h"
#include "DwgViewTestAppDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CDwgViewTestAppDlg dialog



CDwgViewTestAppDlg::CDwgViewTestAppDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DWGVIEWTESTAPP_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDwgViewTestAppDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_DWGVIEWXCTRL2, TestViewer);
}

BEGIN_MESSAGE_MAP(CDwgViewTestAppDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CDwgViewTestAppDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDwgViewTestAppDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CDwgViewTestAppDlg message handlers

BOOL CDwgViewTestAppDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CDwgViewTestAppDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDwgViewTestAppDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDwgViewTestAppDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

BEGIN_EVENTSINK_MAP(CDwgViewTestAppDlg, CDialogEx)
	ON_EVENT(CDwgViewTestAppDlg, IDC_DWGVIEWXCTRL2, DISPID_MOUSEDOWN, CDwgViewTestAppDlg::MouseDownDwgviewxctrl2, VTS_I2 VTS_I2 VTS_I4 VTS_I4)
END_EVENTSINK_MAP()


void CDwgViewTestAppDlg::MouseDownDwgviewxctrl2(short Button, short Shift, long x, long y)
{
	// TODO: Add your message handler code here
}


void CDwgViewTestAppDlg::OnBnClickedButton1()
{
	WCHAR szDirectory[MAX_PATH] = L"";
	::GetCurrentDirectory(sizeof(szDirectory) - 1, szDirectory);

	// TODO: Add extra initialization here
	TestViewer.ShowWindow(SW_SHOW);

	TestViewer.SetDwgFile(CString{ szDirectory } + L"\\acad2013.dwg");

	if (!TestViewer.GetLastError().IsEmpty()) {
		HandleViewerError();
	}
	else {
		SetDlgItemText(IDC_LABEL, L"DwgFile: \\acad2013.dwg");
	}
}

void CDwgViewTestAppDlg::HandleViewerError()
{
	CString sLabel;

	sLabel.Format(L"Error: %s", TestViewer.GetLastError());
	TestViewer.ShowWindow(SW_HIDE);
	SetDlgItemText(IDC_LABEL, sLabel);
}


void CDwgViewTestAppDlg::OnBnClickedButton2()
{
	WCHAR szDirectory[MAX_PATH] = L"";
	::GetCurrentDirectory(sizeof(szDirectory) - 1, szDirectory);

	// TODO: Add extra initialization here
	TestViewer.ShowWindow(SW_SHOW);

	TestViewer.SetDwgFile(CString{ szDirectory } + L"\\acad2018.dwg");

	if (!TestViewer.GetLastError().IsEmpty()) {
		HandleViewerError();
	}
	else {
		SetDlgItemText(IDC_LABEL, L"DwgFile: \\acad2018.dwg");
	}

}
