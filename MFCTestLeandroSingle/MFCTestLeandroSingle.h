
// MFCTestLeandroSingle.h : main header file for the MFCTestLeandroSingle application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCTestLeandroSingleApp:
// See MFCTestLeandroSingle.cpp for the implementation of this class
//

class CMFCTestLeandroSingleApp : public CWinApp
{
public:
	CMFCTestLeandroSingleApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTestLeandroSingleApp theApp;
