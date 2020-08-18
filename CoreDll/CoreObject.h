#pragma once
#include <atlstr.h>
#ifdef COREDLL_EXPORTS
#define CORE_DLL __declspec(dllexport)
#else
#define CORE_DLL __declspec(dllimport)
#endif COREDLL_EXPORTS
#include "Observer.h"

class CORE_DLL CoreObject
{
private:
	Observer* m_observer;
	char* m_text;
public:
	char* GetText();
	void SetText(const char*);
	~CoreObject() { delete m_text; }
	void RegisterObserver(Observer* pObserver) { m_observer = pObserver; }
	void NotifyObserver() { if (m_observer != nullptr) m_observer->Notify(); }
};

