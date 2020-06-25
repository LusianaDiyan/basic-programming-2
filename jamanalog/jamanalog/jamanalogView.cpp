
// jamanalogView.cpp : implementation of the CjamanalogView class
//

#include "stdafx.h"
#ifndef SHARED_HANDLERS
#include "jamanalog.h"
#endif

#include "jamanalogDoc.h"
#include "jamanalogView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CjamanalogView, CView)

BEGIN_MESSAGE_MAP(CjamanalogView, CView)
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
	ON_COMMAND(ID_FILE_NEW, &CjamanalogView::OnFileNew)
	ON_BN_CLICKED(IDOK, &CjamanalogView::OnBnClickedOk)
END_MESSAGE_MAP()

CjamanalogView::CjamanalogView()
{
	// TODO: add construction code here

}

CjamanalogView::~CjamanalogView()
{
}

BOOL CjamanalogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CjamanalogView drawing

void CjamanalogView::OnDraw(CDC* pDC)
{
	CjamanalogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
}


// CjamanalogView printing

BOOL CjamanalogView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CjamanalogView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CjamanalogView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

// CjamanalogView diagnostics

#ifdef _DEBUG
void CjamanalogView::AssertValid() const
{
	CView::AssertValid();
}

void CjamanalogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CjamanalogDoc* CjamanalogView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CjamanalogDoc)));
	return (CjamanalogDoc*)m_pDocument;
}
#endif //_DEBUG

int j = 0;
int m = 0;
int s = 0;
int d;
void CjamanalogView::OnTimer(UINT_PTR nIDEvent)
{
	CDC* pDC = GetDC();

	int center_y = 200, center_x = 200;
	int cx = 200, cy = 100;
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
	pxs = center_x + (d * cos((float)(s * 6 - 135) / 57.3) - d * sin((float)(s * 6 - 135)/ 57.3));
	pys = center_y + (d * sin((float)(s * 6 - 135)/ 57.3) + d * cos((float)(s * 6 - 135)/ 57.3));
	pDC->LineTo(pxs, pys);
	pDC->SelectObject(secondLine);

	double pxm = cx, pym = cy;
	pDC->MoveTo(center_x, center_y);
	pxm = center_x + (length_menit * cos((float)(s * 6 / 60 - 135) / 57.3) - length_menit * sin((float)(s * 6 / 60 - 135) / 57.3));
	pym = center_y + (length_menit * sin((float)(s * 6 / 60 - 135)/ 57.3) + length_menit * cos((float)(s * 6 / 60- 135) / 57.3));
	pDC->LineTo(pxm, pym);
	pDC->SelectObject(minuteLine);

	double pxj = cx, pyj = cy;
	pDC->MoveTo(center_x, center_y);
	pxj = center_x + (length_jam * cos((float)(s * 30 / 3600 - 135) / 57.3) - length_jam * sin((float)(s * 30 / 3600 - 135)/ 57.3));
	pyj = center_y + (length_jam * sin((float)(s * 30 / 3600 - 135) / 57.3) + length_jam * cos((float)(s * 30 / 3600 - 135)/ 57.3));
	pDC->LineTo(pxj, pyj);
	pDC->SelectObject(hourLine);

	s++;

	/*
	if (s == 59)
	{
		s = 0;
		m++;

	}

	if (m == 59)
	{
		m = 0;
		j++;
		j = j + 0.5;
	}
	if (j >= 12)
	{
		j = 0;
	}
	*/
	CView::OnTimer(nIDEvent);
}


void CjamanalogView::OnFileNew()
{
	s = 0;
	m = 0;
	j = 0;
	SetTimer(0, 1, NULL);
}


void CjamanalogView::OnBnClickedOk()
{

}
