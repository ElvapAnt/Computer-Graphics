
// FirstProjectView.cpp : implementation of the CFirstProjectView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "FirstProject.h"
#endif

#include "FirstProjectDoc.h"
#include "FirstProjectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFirstProjectView

IMPLEMENT_DYNCREATE(CFirstProjectView, CView)

BEGIN_MESSAGE_MAP(CFirstProjectView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFirstProjectView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CFirstProjectView construction/destruction

CFirstProjectView::CFirstProjectView() noexcept
{
	image_box = CRect(0, 0, 500, 500);
	m_grid_hit = false;
}

CFirstProjectView::~CFirstProjectView()
{
}

BOOL CFirstProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CFirstProjectView drawing

void CFirstProjectView::OnDraw(CDC* pDC)
{
	CFirstProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
#pragma region 911
	//LOGBRUSH logBrush;
	//logBrush.lbStyle = BS_SOLID;
	//logBrush.lbColor = RGB(255, 255, 102);

	//CPoint trapezoid[4] = { {30,140},{170,140},{230,205},{100,205} };
	//pDC->FillSolidRect(image_box, RGB(192, 192, 192));
	//CPen* outlinePen = new CPen(PS_GEOMETRIC | PS_JOIN_ROUND, 3, &logBrush);
	//CPen* oldPen = pDC->SelectObject(outlinePen);

	//CBrush gridBrush(HS_FDIAGONAL, RGB(0, 0, 128)); 
	//CBrush pinkBrush(RGB(255, 153, 204));
	//CBrush purpleBrush(RGB(102, 0, 204));
	//CBrush yellowBrush(RGB(255, 255, 102));
	//CBrush redBrush(RGB(255, 0, 0));
	//CBrush greenBrush(RGB(0, 204, 0));
	//CBrush orangeBrush(RGB(255, 128, 0));

	////ljubicasti trougao
	//CBrush* oldBrush = pDC->SelectObject(&purpleBrush);
	//CPoint objectCenter = IsoscelesRightTriangle(pDC, 120, 140, 90, TopLeft);
	//DrawRegularPolygon(pDC, objectCenter.x - 5, objectCenter.y - 5, 15, 6, 30);
	//pDC->SelectObject(oldBrush);

	////zuti trapez
	//oldBrush = pDC->SelectObject(&yellowBrush);
	//pDC->Polygon(trapezoid, 4);
	//pDC->SelectObject(oldBrush);

	////crveni kvadrat
	//oldBrush = pDC->SelectObject(&redBrush);
	//DrawRegularPolygon(pDC, 235, 140, 65, 4, 0);
	//pDC->SelectObject(oldBrush);

	////roze trougao
	//oldBrush = pDC->SelectObject(&pinkBrush);
	//objectCenter = IsoscelesRightTriangle(pDC, 300, 140, 65, Top);
	//DrawRegularPolygon(pDC, objectCenter.x, objectCenter.y - 5, 15, 8, 30);
	//pDC->SelectObject(oldBrush);

	////grid trougao
	//oldBrush = pDC->SelectObject(&gridBrush);
	//pDC->SetBkColor(RGB(255, 255, 255));
	//objectCenter = IsoscelesRightTriangle(pDC, 365, 75, 105, Bottom);
	//DrawRegularPolygon(pDC, objectCenter.x, objectCenter.y + 10, 30, 6, 0);
	//pDC->SelectObject(oldBrush);
	//pDC->SetBkMode(TRANSPARENT);
	////narandzasti trougao
	//oldBrush = pDC->SelectObject(&orangeBrush);
	//objectCenter = IsoscelesRightTriangle(pDC, 470, 180, 210, BottomLeft);
	//DrawRegularPolygon(pDC, objectCenter.x - 10, objectCenter.y + 10, 40, 5, 30);
	//pDC->SelectObject(oldBrush);

	////zeleni trougao
	//oldBrush = pDC->SelectObject(&greenBrush);
	//objectCenter = IsoscelesRightTriangle(pDC, 410, 330, 150, Left);
	//DrawRegularPolygon(pDC, objectCenter.x - 10, objectCenter.y, 40, 4, 0);
	//pDC->SelectObject(oldBrush);


	//pDC->SelectObject(oldPen);
	//delete outlinePen;
#pragma endregion
#pragma region 69
	//LOGBRUSH logBrush;
	//logBrush.lbStyle = BS_SOLID;
	//logBrush.lbColor = RGB(0, 0, 255);
	//CPen* outlinePen = new CPen(PS_GEOMETRIC | PS_JOIN_ROUND, 4, &logBrush);
	//CPen polygonPen(PS_SOLID, 2, RGB(0, 0, 255));
	//CPen* oldPen = pDC->SelectObject(outlinePen);
	//CBrush* oldBrush;
	//pDC->FillSolidRect(image_box, RGB(192, 192, 192));
	//CPoint objectCenter = { 0,0 };

	//CPen* activePen;

	//CBrush yellowBrush(RGB(255, 255, 0));
	//CBrush pinkBrush(RGB(255,0,255));
	//CBrush cyanBrush(RGB(0,255,255));
	//CBrush redBrush(RGB(255,0,0));
	//CBrush purpleBrush(RGB(128, 0, 128));
	//CBrush gridBrush(HS_FDIAGONAL,RGB(0,0,192));
	//CBrush greenBrush(RGB(0,255,0));
	//CBrush orangeBrush(RGB(255,165,0));

	////zuti trougao
	//oldBrush = pDC->SelectObject(&yellowBrush);
	//objectCenter = IsoscelesRightTriangle(pDC, 25, 25, 300, BottomRight);
	//activePen = pDC->SelectObject(&polygonPen);
	//DrawRegularPolygon(pDC, objectCenter.x, objectCenter.y, 40, 5, 15);
	//pDC->SelectObject(activePen);
	//pDC->SelectObject(oldBrush);

	////ljubicasti trapez
	//CPoint trapezoid[4] = { {175,175},{325,175},{475,325},{325,325} };
	//oldBrush = pDC->SelectObject(&purpleBrush);
	//pDC->Polygon(trapezoid, 4);
	//pDC->SelectObject(oldBrush);

	////cyan trougao
	//oldBrush = pDC->SelectObject(&cyanBrush);
	//IsoscelesRightTriangle(pDC, 325, 175, 150, TopLeft);
	//IsoscelesRightTriangle(pDC, 175, 325, 150, TopLeft);
	//pDC->SelectObject(oldBrush);

	////roze trougao 
	//oldBrush = pDC->SelectObject(&pinkBrush);
	//objectCenter = IsoscelesRightTriangle(pDC, 325, 25, 150, BottomRight);
	//activePen = pDC->SelectObject(&polygonPen);
	//DrawRegularPolygon(pDC, objectCenter.x+5, objectCenter.y+5, 20, 7, 45);
	//pDC->SelectObject(activePen);
	//pDC->SelectObject(oldBrush);

	////crven kvadrat
	//oldBrush = pDC->SelectObject(&redBrush);
	//DrawRegularPolygon(pDC, 100, 400, 105, 4, 150);
	//pDC->SelectObject(oldBrush);

	////grid trougao
	//oldBrush = pDC->SelectObject(&gridBrush);
	//pDC->SetBkColor(RGB(255, 255, 255));
	//objectCenter = IsoscelesRightTriangle(pDC, 325, 175, 150, Right);
	//pDC->SetBkMode(TRANSPARENT);
	//activePen = pDC->SelectObject(&polygonPen);
	//DrawRegularPolygon(pDC, objectCenter.x+10, objectCenter.y, 40, 6, 0);
	//pDC->SelectObject(activePen);
	//pDC->SelectObject(oldBrush);

	////zeleni trougao
	//oldBrush = pDC->SelectObject(&greenBrush);
	//objectCenter = IsoscelesRightTriangle(pDC, 175, 475, 300, TopRight);
	//activePen = pDC->SelectObject(&polygonPen);
	//DrawRegularPolygon(pDC, objectCenter.x+10, objectCenter.y-10, 40, 4, 0);
	//pDC->SelectObject(activePen);
	//pDC->SelectObject(oldBrush);

	////narandzasti trougao
	//oldBrush = pDC->SelectObject(&orangeBrush);
	//objectCenter = IsoscelesRightTriangle(pDC, 475, 325, 150, BottomLeft);
	//activePen = pDC->SelectObject(&polygonPen);
	//DrawRegularPolygon(pDC, objectCenter.x-5, objectCenter.y+5, 20, 8, 0);
	//pDC->SelectObject(activePen);
	//pDC->SelectObject(oldBrush);

	//delete outlinePen;
#pragma endregion


	if (m_grid_hit)
	{
		CPen pen(PS_SOLID, 2, RGB(234, 234, 234));
		pDC->SetBkMode(TRANSPARENT);
		CPen* oldPen = pDC->SelectObject(&pen);

		int gridCellSize = 25;
		int width = 500; 
		int height = 500; 

		for (int x = 0; x <= width; x += gridCellSize)
		{
			pDC->MoveTo(x, 0);
			pDC->LineTo(x, height);
		}
		for (int y = 0; y <= height; y += gridCellSize)
		{
			pDC->MoveTo(0, y);
			pDC->LineTo(width, y);
		}

		pDC->SelectObject(oldPen);

	}
}	


void CFirstProjectView::DrawRegularPolygon(CDC* pDC, int cx, int cy, int r, int n, float alfa) 
{
	if (n < 3) return; 

	CPoint* points = new CPoint[n];
	float angleIncrement = (2.0f * 3.14159265358979323846f) / n;

	for (int i = 0; i < n; i++)
	{
		points[i].x = cx + r * cos(alfa + i * angleIncrement);
		points[i].y = cy + r * sin(alfa + i * angleIncrement);
	}

	pDC->Polygon(points, n);

	delete[] points;
}

CPoint CFirstProjectView::IsoscelesRightTriangle(CDC* pDC, int x, int y, int sideLength, PrimitiveOrientation orientation)
{
	CPoint points[3];
	CPoint incenter;
	switch (orientation)
	{
	case TopLeft:
		points[0] = { x, y };
		points[1] = { x - sideLength, y };
		points[2] = { x, y - sideLength };
		incenter = { x - sideLength / (int)(2 * (1 + sqrt(2))), y - sideLength / (int)(2 * (1 + sqrt(2))) };
		break;

	case TopRight:
		points[0] = { x, y };
		points[1] = { x + sideLength, y };
		points[2] = { x, y - sideLength };
		incenter = { x + sideLength / (int)(2 * (1 + sqrt(2))), y - sideLength / (int)(2 * (1 + sqrt(2))) };
		break;

	case BottomLeft:
		points[0] = { x, y };
		points[1] = { x - sideLength, y };
		points[2] = { x, y + sideLength };
		incenter = { x - sideLength / (int)(2 * (1 + sqrt(2))), y + sideLength / (int)(2 * (1 + sqrt(2))) };
		break;

	case BottomRight:
		points[0] = { x, y };
		points[1] = { x + sideLength, y };
		points[2] = { x, y + sideLength };
		incenter = { x + sideLength / (int)(2 * (1 + sqrt(2))), y + sideLength / (int)(2 * (1 + sqrt(2))) };
		break;

	case Top:
		points[0] = { x, y };
		points[1] = { x - sideLength, y - sideLength };
		points[2] = { x + sideLength, y - sideLength };
		incenter = { x, y - sideLength / (int)(1 + sqrt(2)) };
		break;

	case Bottom:
		points[0] = { x, y };
		points[1] = { x - sideLength, y + sideLength };
		points[2] = { x + sideLength, y + sideLength };
		incenter = { x, y + sideLength / (int)(1 + sqrt(2)) };
		break;

	case Left:
		points[0] = { x, y };
		points[1] = { x - sideLength, y - sideLength };
		points[2] = { x - sideLength, y + sideLength };
		incenter = { x - sideLength / (int)(1 + sqrt(2)), y };
		break;
	case Right:
		points[0] = { x, y };
		points[1] = { x + sideLength, y - sideLength };
		points[2] = { x + sideLength, y + sideLength };
		incenter = { x + sideLength / (int)(1 + sqrt(2)), y };
		break;
	}
	pDC->Polygon(points, 3);
	return incenter;
}
// CFirstProjectView printing

void CFirstProjectView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}
BOOL CFirstProjectView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}
void CFirstProjectView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}
void CFirstProjectView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}
void CFirstProjectView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}
void CFirstProjectView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CFirstProjectView diagnostics

#ifdef _DEBUG
void CFirstProjectView::AssertValid() const
{
	CView::AssertValid();
}

void CFirstProjectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFirstProjectDoc* CFirstProjectView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFirstProjectDoc)));
	return (CFirstProjectDoc*)m_pDocument;
}
#endif //_DEBUG


// CFirstProjectView message handlers


void CFirstProjectView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	if (nChar == VK_SPACE) 
	{
		m_grid_hit = !m_grid_hit;
		Invalidate(); 
	}
	
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CFirstProjectView::OnLButtonDown(UINT nFlags, CPoint point)
{
	SetFocus();
	CView::OnLButtonDown(nFlags, point);
}
