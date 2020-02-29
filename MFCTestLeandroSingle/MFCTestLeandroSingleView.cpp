
// MFCTestLeandroSingleView.cpp : implementation of the CMFCTestLeandroSingleView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCTestLeandroSingle.h"
#endif

#include "MFCTestLeandroSingleDoc.h"
#include "MFCTestLeandroSingleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTestLeandroSingleView

IMPLEMENT_DYNCREATE(CMFCTestLeandroSingleView, CView)

BEGIN_MESSAGE_MAP(CMFCTestLeandroSingleView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DRAW_CIRCLE, &CMFCTestLeandroSingleView::OnDrawCircle)
	ON_COMMAND(ID_DRAW_RECTANGLE, &CMFCTestLeandroSingleView::OnDrawRectangle)
	ON_UPDATE_COMMAND_UI(ID_DRAW_CIRCLE, &CMFCTestLeandroSingleView::OnUpdateDrawCircle)
	ON_UPDATE_COMMAND_UI(ID_DRAW_RECTANGLE, &CMFCTestLeandroSingleView::OnUpdateDrawRectangle)
END_MESSAGE_MAP()

// CMFCTestLeandroSingleView construction/destruction

CMFCTestLeandroSingleView::CMFCTestLeandroSingleView() noexcept
{
	// TODO: add construction code here

}

CMFCTestLeandroSingleView::~CMFCTestLeandroSingleView()
{
}

BOOL CMFCTestLeandroSingleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCTestLeandroSingleView drawing

void CMFCTestLeandroSingleView::OnDraw(CDC* pDC)
{
	CMFCTestLeandroSingleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here	
	if (m_bDrawCircle)
		pDC->Ellipse(100, 100, 300, 300);
	else
	{
		CBrush a;
			a.CreateSolidBrush(100);
		pDC->FrameRect(CRect(100, 100, 400, 400), &a);
	}

	pDC->TextOutW(100, 400, pDoc->GetName());
}


// CMFCTestLeandroSingleView printing
BOOL CMFCTestLeandroSingleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCTestLeandroSingleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCTestLeandroSingleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFCTestLeandroSingleView diagnostics
#ifdef _DEBUG
void CMFCTestLeandroSingleView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCTestLeandroSingleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCTestLeandroSingleDoc* CMFCTestLeandroSingleView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCTestLeandroSingleDoc)));
	return (CMFCTestLeandroSingleDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCTestLeandroSingleView message handlers
void CMFCTestLeandroSingleView::OnDrawCircle()
{
	// TODO: Add your command handler code here
	m_bDrawCircle = true;
	Invalidate();
	UpdateWindow();
}


void CMFCTestLeandroSingleView::OnDrawRectangle()
{
	// TODO: Add your command handler code here
	m_bDrawCircle = false;
	Invalidate();
	UpdateWindow();
}


void CMFCTestLeandroSingleView::OnUpdateDrawCircle(CCmdUI* pCmdUI)
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(!m_bDrawCircle);
}


void CMFCTestLeandroSingleView::OnUpdateDrawRectangle(CCmdUI* pCmdUI)
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(m_bDrawCircle);
}
