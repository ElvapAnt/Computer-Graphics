
// FirstProjectView.h : interface of the CFirstProjectView class
//

#pragma once


class CFirstProjectView : public CView
{
protected: // create from serialization only
	CFirstProjectView() noexcept;
	DECLARE_DYNCREATE(CFirstProjectView)

// Attributes
public:
	CFirstProjectDoc* GetDocument() const;

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
	virtual ~CFirstProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	CRect image_box;
	bool m_grid_hit;
	enum PrimitiveOrientation
	{
		TopLeft,
		TopRight,
		BottomLeft,
		BottomRight,
		Top,
		Right,
		Bottom,
		Left
	};
	void DrawRegularPolygon(CDC* pDC, int cx, int cy, int r, int n, float alfa);
	CPoint IsoscelesRightTriangle(CDC* pDC, int x, int y, int sideLength, PrimitiveOrientation orientation);
// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
//	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in FirstProjectView.cpp
inline CFirstProjectDoc* CFirstProjectView::GetDocument() const
   { return reinterpret_cast<CFirstProjectDoc*>(m_pDocument); }
#endif

