
// jamanalogView.h : interface of the CjamanalogView class
//

#pragma once


class CjamanalogView : public CView
{
protected: // create from serialization only
	CjamanalogView();
	DECLARE_DYNCREATE(CjamanalogView)

// Attributes
public:
	CjamanalogDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CjamanalogView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnFileNew();
	afx_msg void OnBnClickedOk();
};

#ifndef _DEBUG  // debug version in jamanalogView.cpp
inline CjamanalogDoc* CjamanalogView::GetDocument() const
   { return reinterpret_cast<CjamanalogDoc*>(m_pDocument); }
#endif

