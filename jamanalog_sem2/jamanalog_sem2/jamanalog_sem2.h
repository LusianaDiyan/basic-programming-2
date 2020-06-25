
// jamanalog_sem2.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cjamanalog_sem2App:
// See jamanalog_sem2.cpp for the implementation of this class
//

class Cjamanalog_sem2App : public CWinApp
{
public:
	Cjamanalog_sem2App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cjamanalog_sem2App theApp;