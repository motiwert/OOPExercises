#pragma once
#include <CoreObject.h>
#include <Observer.h>
class CGEObject : public Observer {
protected:
	CWnd* m_pWnd;
	CoreObject* m_pCoreObject;
public:
	CGEObject(CWnd* pWnd);
	void Bang();
	CoreObject* GetCore();

	virtual void Notify();
};