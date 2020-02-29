
// MFCTestLeandroSingleView.h : interface of the CMFCTestLeandroSingleView class
//

#pragma once


class CMFCTestLeandroSingleView : public CView
{
protected: // create from serialization only
	CMFCTestLeandroSingleView() noexcept;
	DECLARE_DYNCREATE(CMFCTestLeandroSingleView)

// Attributes
public:
	CMFCTestLeandroSingleDoc* GetDocument() const;

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
	virtual ~CMFCTestLeandroSingleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawCircle();
private:
	bool m_bDrawCircle{true}; // if not circle then a rectangle
public:
	afx_msg void OnDrawRectangle();
	afx_msg void OnUpdateDrawCircle(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDrawRectangle(CCmdUI* pCmdUI);
};

#ifndef _DEBUG  // debug version in MFCTestLeandroSingleView.cpp
inline CMFCTestLeandroSingleDoc* CMFCTestLeandroSingleView::GetDocument() const
   { return reinterpret_cast<CMFCTestLeandroSingleDoc*>(m_pDocument); }
#endif

