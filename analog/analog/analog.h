
// analog.h : main header file for the analog application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CanalogApp:
// See analog.cpp for the implementation of this class
//

class CanalogApp : public CWinAppEx
{
public:
	CanalogApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CanalogApp theApp;
