
// jamanalog.h : main header file for the jamanalog application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CjamanalogApp:
// See jamanalog.cpp for the implementation of this class
//

class CjamanalogApp : public CWinAppEx
{
public:
	CjamanalogApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CjamanalogApp theApp;
