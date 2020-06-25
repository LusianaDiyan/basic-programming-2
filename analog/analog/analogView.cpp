#include "stdafx.h"
#ifndef SHARED_HANDLERS
#include "analog.h"
#endif

#include "analogDoc.h"
#include "analogView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
// CanalogView

IMPLEMENT_DYNCREATE(CanalogView, CView)

BEGIN_MESSAGE_MAP(CanalogView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
	ON_COMMAND(ID_FILE_NEW, &CanalogView::OnFileNew)
END_MESSAGE_MAP()

// CanalogView construction/destruction

CanalogView::CanalogView()
{

}

CanalogView::~CanalogView()
{
}

BOOL CanalogView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CView::PreCreateWindow(cs);
}

// CanalogView drawing

void CanalogView::OnDraw(CDC* pDC)
{
	/*
	CanalogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	int center_y=200, center_x=200;
	int cx=200, cy=100;
	int d=100;
	int j = 0, m = 0, s = 0;

	pDC->Ellipse(CRect(center_x-2*d, center_y-2*d,center_x+2*d,center_y+2*d));

	pDC->TextOutW(center_x-8, center_y - 1.75*d, L"12");
	pDC->TextOutW(center_x + 1.75*d, center_y - 8, L"3");
	pDC->TextOutW(center_x - 8, center_y + 1.75*d, L"6");
	pDC->TextOutW(center_x - 1.75*d, center_y - 8, L"9");

	for (int i=0 ; i < 60; i++)
	{
		CPen detik;
		CPen putih;

		CPen menit;
		CPen jam;

		detik.CreatePen(PS_SOLID, 3, RGB(255, 0, 0));
		putih.CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
		
		menit.CreatePen(PS_SOLID, 4, RGB(0, 255, 0));
		jam.CreatePen(PS_SOLID, 4, RGB(0, 0, 255));

		CPen* secondLine = pDC->SelectObject(&detik);
		CPen* minuteLine = pDC->SelectObject(&menit);
		CPen* hourLine = pDC->SelectObject(&jam);

		pDC->FillSolidRect(center_x - 5, center_y - 5, 10, 10, RGB(255, 0, 0));
		 
		double px = cx, py = cy;
		pDC->MoveTo(center_x, center_y);
		px = 200 + (100 * cos(i * 6 / 57.3) - d * sin(i * 6 / 57.3));
		py = 200 + (100 * sin(i * 6 / 57.3) + d * cos(i * 6 / 57.3));
		pDC->LineTo(px, py);
		pDC->SelectObject(secondLine);

		Sleep(1000);

		secondLine = pDC->SelectObject(&putih);
		pDC->MoveTo(center_x, center_y);
		px = 200 + (100 * cos(i * 6 / 57.3) - d * sin(i * 6 / 57.3));
		py = 200 + (100 * sin(i * 6 / 57.3) + d * cos(i * 6 / 57.3));
		pDC->LineTo(px, py);
		pDC->SelectObject(secondLine);

		pDC->MoveTo(center_x, center_y);
		pDC->LineTo(200 + (100 * cos(m * 6 / 57.3) - d * sin(m * 6 / 57.3)), 200 + (100 * sin(m * 6 / 57.3) + d * cos(m * 6 / 57.3)));
		pDC->SelectObject(&menit);

		pDC->MoveTo(center_x, center_y);
		pDC->LineTo(200 + (100 * cos(j * 30 / 57.3) - d * sin(j * 30 / 57.3)), 200 + (100 * sin(j * 30 / 57.3) + d * cos(j * 30 / 57.3)));
		pDC->SelectObject(&jam);
	}
	*/
}

// CanalogView printing

BOOL CanalogView::OnPreparePrinting(CPrintInfo* pInfo)
{
	return DoPreparePrinting(pInfo);
}

void CanalogView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	
}

void CanalogView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	
}


#ifdef _DEBUG
void CanalogView::AssertValid() const
{
	CView::AssertValid();
}

void CanalogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CanalogDoc* CanalogView::GetDocument() const 
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CanalogDoc)));
	return (CanalogDoc*)m_pDocument;
}
#endif //_DEBUG

int j = 0;
int m = 0;
int s = 0;
int d;
void CanalogView::OnTimer(UINT_PTR nIDEvent)
{
	CDC* pDC = GetDC();

	int center_y = 200, center_x = 200;
	int cx = 200, cy = 100;
	d = 100;
	
	pDC->Ellipse(CRect(center_x - 2 * d, center_y - 2 * d, center_x + 2 * d, center_y + 2 * d));

	pDC->TextOutW(center_x - 8, center_y - 1.75*d, L"12");
	pDC->TextOutW(center_x + 1.75*d, center_y - 8, L"3");
	pDC->TextOutW(center_x - 8, center_y + 1.75*d, L"6");
	pDC->TextOutW(center_x - 1.75*d, center_y - 8, L"9");

	CPen detik;
	CPen menit;
	CPen jam;

	detik.CreatePen(PS_SOLID, 3, RGB(255, 0, 0));
	menit.CreatePen(PS_SOLID, 4, RGB(0, 255, 0));
	jam.CreatePen(PS_SOLID, 4, RGB(0, 0, 255));

	CPen* secondLine = pDC->SelectObject(&detik);
	CPen* minuteLine = pDC->SelectObject(&menit);
	CPen* hourLine = pDC->SelectObject(&jam);

	pDC->FillSolidRect(center_x - 5, center_y - 5, 10, 10, RGB(255, 0, 0));

	double pxs = cx, pys = cy;
	pDC->MoveTo(center_x, center_y);
	pxs = 200 + (100 * cos(s * 6 / 57.3) - d * sin(s * 6 / 57.3));
	pys = 200 + (100 * sin(s * 6 / 57.3) + d * cos(s * 6 / 57.3));
	pDC->LineTo(pxs, pys);
	pDC->SelectObject(secondLine);

	double pxm = cx, pym = cy;
	pDC->MoveTo(center_x, center_y);
	pxm = 200 + (100 * cos(m * 6 / 57.3) - d * sin(m * 6 / 57.3));
	pym = 200 + (100 * sin(m * 6 / 57.3) + d * cos(m * 6 / 57.3));
	pDC->LineTo(pxm, pym);
	pDC->SelectObject(minuteLine);

	double pxj = cx, pyj = cy;
	pDC->MoveTo(center_x, center_y);
	pxj = 200 + (100 * cos(j * 30 / 57.3) - d * sin(j * 30 / 57.3));
	pyj = 200 + (100 * sin(j * 30 / 57.3) + d * cos(j * 30 / 57.3));
	pDC->LineTo(pxj, pyj);
	pDC->SelectObject(hourLine);

	if (s > 59)
	{
		s = 0;
		m++;
	}
	
	if(m>59)
	{
		m = 0;
		j++;
	}
	if (j>59)
	{
		j = 0;
		s++;
	}

	CView::OnTimer(nIDEvent);
}


void CanalogView::OnFileNew()
{
	s = 0;
	m = 0;
	j = 0;
	SetTimer(0,1/10, NULL);
}
