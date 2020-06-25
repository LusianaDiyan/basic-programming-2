
// analogView.h : interface of the CanalogView class
//

#pragma once


class CanalogView : public CView
{
protected: // create from serialization only
	CanalogView();
	DECLARE_DYNCREATE(CanalogView)

// Attributes
public:
	CanalogDoc* GetDocument() const;

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
	virtual ~CanalogView();
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
};

#ifndef _DEBUG  // debug version in analogView.cpp
inline CanalogDoc* CanalogView::GetDocument() const
   { return reinterpret_cast<CanalogDoc*>(m_pDocument); }
#endif

