
// jamanalog_sem2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "jamanalog_sem2.h"
#include "jamanalog_sem2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

int center_y = 200, center_x = 200;
int jamm, menitt, detikk;

int j;
int m;
int s;
int k;
int d = 100;
int cx = 200, cy = 100;

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cjamanalog_sem2Dlg dialog

Cjamanalog_sem2Dlg::Cjamanalog_sem2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cjamanalog_sem2Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cjamanalog_sem2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(Cjamanalog_sem2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(RESET, &Cjamanalog_sem2Dlg::OnBnClickedReset)
	ON_BN_CLICKED(IDCANCEL, &Cjamanalog_sem2Dlg::OnBnClickedCancel)
	ON_BN_CLICKED(SET, &Cjamanalog_sem2Dlg::OnBnClickedSet)
	ON_BN_CLICKED(Start, &Cjamanalog_sem2Dlg::OnBnClickedStart)
	ON_WM_TIMER()
	ON_EN_CHANGE(IDC_JAM, &Cjamanalog_sem2Dlg::OnEnChangeJam)
	ON_EN_CHANGE(IDC_MENIT, &Cjamanalog_sem2Dlg::OnEnChangeMenit)
	ON_EN_CHANGE(IDC_DETIK, &Cjamanalog_sem2Dlg::OnEnChangeDetik)
END_MESSAGE_MAP()

// Cjamanalog_sem2Dlg message handlers

BOOL Cjamanalog_sem2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void Cjamanalog_sem2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void Cjamanalog_sem2Dlg::OnPaint()
{
	CDC* pDC = GetDC();

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
	pDC->Ellipse(CRect(center_x - 2 * d, center_y - 2 * d, center_x + 2 * d, center_y + 2 * d));

	pDC->TextOutW(center_x - 8, center_y - 1.75*d, L"12");
	pDC->TextOutW(center_x + 1 * d, center_y - (d + 55), L"1");
	pDC->TextOutW(center_x + 1.5*d, center_y - 90, L"2");
	pDC->TextOutW(center_x + 1.75*d, center_y - 8, L"3");
	pDC->TextOutW(center_x + (d + 55), center_y + 0.8*d, L"4");
	pDC->TextOutW(center_x + 90, center_y + 1.5*d, L"5");
	pDC->TextOutW(center_x - 8, center_y + 1.75*d, L"6");
	pDC->TextOutW(center_x - 90, center_y + 1.5*d, L"7");
	pDC->TextOutW(center_x - (d + 55), center_y + 0.8*d, L"8");
	pDC->TextOutW(center_x - 1.75*d, center_y - 8, L"9");
	pDC->TextOutW(center_x - 1.6*d, center_y - 90, L"10");
	pDC->TextOutW(center_x - 1 * d, center_y - (d + 55), L"11");
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR Cjamanalog_sem2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CAboutDlg::OnTimer(UINT_PTR nIDEvent)
{
	CDC* pDC = GetDC();

	d = 100;
	int length_jam = 80;
	int length_menit = 90;

	pDC->Ellipse(CRect(center_x - 2 * d, center_y - 2 * d, center_x + 2 * d, center_y + 2 * d));

	pDC->TextOutW(center_x - 8, center_y - 1.75*d, L"12");
	pDC->TextOutW(center_x + 1 * d, center_y - (d + 55), L"1");
	pDC->TextOutW(center_x + 1.5*d, center_y - 90, L"2");
	pDC->TextOutW(center_x + 1.75*d, center_y - 8, L"3");
	pDC->TextOutW(center_x + (d + 55), center_y + 0.8*d, L"4");
	pDC->TextOutW(center_x + 90, center_y + 1.5*d, L"5");
	pDC->TextOutW(center_x - 8, center_y + 1.75*d, L"6");
	pDC->TextOutW(center_x - 90, center_y + 1.5*d, L"7");
	pDC->TextOutW(center_x - (d + 55), center_y + 0.8*d, L"8");
	pDC->TextOutW(center_x - 1.75*d, center_y - 8, L"9");
	pDC->TextOutW(center_x - 1.6*d, center_y - 90, L"10");
	pDC->TextOutW(center_x - 1 * d, center_y - (d + 55), L"11");

	CPen detik;
	CPen menit;
	CPen jam;

	detik.CreatePen(PS_SOLID, 4, RGB(0, 125, 0));
	menit.CreatePen(PS_SOLID, 4, RGB(255, 0, 0));
	jam.CreatePen(PS_SOLID, 4, RGB(0, 0, 255));

	CPen* secondLine = pDC->SelectObject(&detik);
	CPen* minuteLine = pDC->SelectObject(&menit);
	CPen* hourLine = pDC->SelectObject(&jam);

	pDC->FillSolidRect(center_x - 5, center_y - 5, 10, 10, RGB(255, 0, 0));

	double pxs = cx, pys = cy;
	pDC->MoveTo(center_x, center_y);
	pxs = center_x + (d * cos((double)(s * 6 - 135) / 57.3) - d * sin((double)(s * 6 - 135) / 57.3));
	pys = center_y + (d * sin((double)(s * 6 - 135) / 57.3) + d * cos((double)(s * 6 - 135) / 57.3));
	pDC->LineTo((int)pxs, (int)pys);
	pDC->SelectObject(secondLine);

	double pxm = cx, pym = cy;
	pDC->MoveTo(center_x, center_y);
	pxm = center_x + (length_menit * cos((double)(s * 6 / 60 - 135) / 57.3) - length_menit * sin((double)(s * 6 / 60 - 135) / 57.3));
	pym = center_y + (length_menit * sin((double)(s * 6 / 60 - 135) / 57.3) + length_menit * cos((double)(s * 6 / 60 - 135) / 57.3));
	pDC->LineTo((int)pxm, (int)pym);
	pDC->SelectObject(minuteLine);

	double pxj = cx, pyj = cy;
	pDC->MoveTo(center_x, center_y);
	pxj = center_x + (length_jam * cos((double)(s * 30 / 3600 - 135) / 57.3) - length_jam * sin((double)(s * 30 / 3600 - 135) / 57.3));
	pyj = center_y + (length_jam * sin((double)(s * 30 / 3600 - 135) / 57.3) + length_jam * cos((double)(s * 30 / 3600 - 135) / 57.3));
	pDC->LineTo((int)pxj, (int)pyj);
	pDC->SelectObject(hourLine);

	s++;

	CDialogEx::OnTimer(nIDEvent);
}

void Cjamanalog_sem2Dlg::OnTimer(UINT_PTR nIDEvent)
{
	CDC* pDC = GetDC();

	d = 100;
	int length_jam = 80;
	int length_menit = 90;

	pDC->Ellipse(CRect(center_x - 2 * d, center_y - 2 * d, center_x + 2 * d, center_y + 2 * d));

	pDC->TextOutW(center_x - 8, center_y - 1.75*d, L"12");
	pDC->TextOutW(center_x + 1 * d, center_y - (d + 55), L"1");
	pDC->TextOutW(center_x + 1.5*d, center_y - 90, L"2");
	pDC->TextOutW(center_x + 1.75*d, center_y - 8, L"3");
	pDC->TextOutW(center_x + (d + 55), center_y + 0.8*d, L"4");
	pDC->TextOutW(center_x + 90, center_y + 1.5*d, L"5");
	pDC->TextOutW(center_x - 8, center_y + 1.75*d, L"6");
	pDC->TextOutW(center_x - 90, center_y + 1.5*d, L"7");
	pDC->TextOutW(center_x - (d + 55), center_y + 0.8*d, L"8");
	pDC->TextOutW(center_x - 1.75*d, center_y - 8, L"9");
	pDC->TextOutW(center_x - 1.6*d, center_y - 90, L"10");
	pDC->TextOutW(center_x - 1 * d, center_y - (d + 55), L"11");

	CPen detik;
	CPen menit;
	CPen jam;

	detik.CreatePen(PS_SOLID, 4, RGB(0, 125, 0));
	menit.CreatePen(PS_SOLID, 4, RGB(255, 255, 255));
	jam.CreatePen(PS_SOLID, 4, RGB(0, 0, 255));

	CPen* secondLine = pDC->SelectObject(&detik);
	CPen* minuteLine = pDC->SelectObject(&menit);
	CPen* hourLine = pDC->SelectObject(&jam);

	pDC->FillSolidRect(center_x - 5, center_y - 5, 10, 10, RGB(255, 0, 0));

	double pxs = cx, pys = cy;
	pDC->MoveTo(center_x, center_y);
	pxs = center_x + (d * cos((double)(s * 6 - 135) / 57.3) - d * sin((double)(s * 6 - 135) / 57.3));
	pys = center_y + (d * sin((double)(s * 6 - 135) / 57.3) + d * cos((double)(s * 6 - 135) / 57.3));
	pDC->LineTo((int)pxs, (int)pys);
	pDC->SelectObject(secondLine);

	double pxm = cx, pym = cy;
	pDC->MoveTo(center_x, center_y);
	pxm = center_x + (length_menit * cos((double)(m * 6 - 135) / 57.3) - length_menit * sin((double)(m * 6 / 60 - 135) / 57.3));
	pym = center_y + (length_menit * sin((double)(m * 6 - 135) / 57.3) + length_menit * cos((double)(m * 6 / 60 - 135) / 57.3));
	pDC->LineTo((int)pxm, (int)pym);
	pDC->SelectObject(minuteLine);

	double pxj = cx, pyj = cy;
	pDC->MoveTo(center_x, center_y);
	pxj = center_x + (length_jam * cos((double)(j * 30 - 135) / 57.3) - length_jam * sin((double)(j * 30 - 135) / 57.3));
	pyj = center_y + (length_jam * sin((double)(j * 30 - 135) / 57.3) + length_jam * cos((double)(j * 30 - 135) / 57.3));
	pDC->LineTo((int)pxj, (int)pyj);
	pDC->SelectObject(hourLine);

	s++;
	m++;
	if (s > 59)
	{
		s = 0;
		j++;
	}
	if (m > 3599)
	{
		m = 0;
	}
	/*
	if (k == 12){
		k = 0;
		j++;
	}
	*/
	////////////////////
	/*
	if (s == 59)
	{
		s = 0;
		m++;
		//j = j + 1;
	}

	if (m == 59)
	{
		m = 0;
		j++;
		//j = j + 0.5;
	}
	if (j >= 59)
	{
		//j = 0;
	}*/

	CDialogEx::OnTimer(nIDEvent);
}

void Cjamanalog_sem2Dlg::OnBnClickedReset()
{
	/*
	j = 0;
	m = 0;
	s = 0;*/

	CTime time = CTime::GetTickCount();

	s = time.GetSecond();
	m = time.GetMinute();
	j = time.GetHour();

	SetTimer(0, 1, NULL);
}

void Cjamanalog_sem2Dlg::OnBnClickedCancel()
{
	CDialogEx::OnCancel();
}

void Cjamanalog_sem2Dlg::OnBnClickedSet()
{
	j = 0;
	m = 0;
	s = 0;
	k = 0;

	SetTimer(0, 1, NULL);
	CString tjam;
	GetDlgItemText(IDC_JAM, tjam);
	CString tmenit;
	GetDlgItemText(IDC_MENIT, tmenit);
	CString tdetik;
	GetDlgItemText(IDC_DETIK, tdetik);

	j = _ttoi(tjam) * 110 +_ttoi(tmenit);
	m = _ttoi(tmenit);
	s = _ttoi(tdetik);
	/*
	j += 5 * jamm;
	j += menitt / 12;
	k = menitt - (12 * (menitt / 12));
	m = menitt;
	s = detikk;
	*/
	/*
	if (jamm >= 12)
	{
		jamm -= 12;
		jamm *= 30;
		menitt *= 6;
		detikk *= 6;
	}
	
	SetDlgItemText(IDC_JAM, 0);
	SetDlgItemText(IDC_MENIT, 0);
	SetDlgItemText(IDC_DETIK, 0);
	*/
}

void Cjamanalog_sem2Dlg::OnBnClickedStart()
{
	SetTimer(0, 1, NULL);
	s = 0;
	m = 0;
	j = 0;
}

void Cjamanalog_sem2Dlg::OnEnChangeJam()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void Cjamanalog_sem2Dlg::OnEnChangeMenit()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void Cjamanalog_sem2Dlg::OnEnChangeDetik()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
