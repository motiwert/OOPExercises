
// ObserverPatternExercise.h : main header file for the ObserverPatternExercise application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CObserverPatternExerciseApp:
// See ObserverPatternExercise.cpp for the implementation of this class
//

class CObserverPatternExerciseApp : public CWinApp
{
public:
	CObserverPatternExerciseApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CObserverPatternExerciseApp theApp;
