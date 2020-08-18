#include "pch.h"
#include "GEObject.h"

#include <atlstr.h>

CGEObject::CGEObject(CWnd* pWnd)
{
	m_pWnd = pWnd;
	m_pCoreObject = new CoreObject();
	m_pCoreObject->SetText("GE Text");
	m_pCoreObject->RegisterObserver(this);
}

void CGEObject::Bang()
{
	if (m_pWnd != nullptr) {
		m_pWnd->GetDC()->Rectangle(100,100,200,200);
		CString txt = m_pCoreObject->GetText();
		m_pWnd->GetDC()->TextOutA(120, 150, txt);
	}
}

CoreObject* CGEObject::GetCore()
{
	return m_pCoreObject;
}

void CGEObject::Notify()
{
	Bang();
}
