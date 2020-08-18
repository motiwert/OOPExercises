#include "pch.h"
#include "CoreObject.h"

char* CoreObject::GetText()
{
	return m_text;
}

void CoreObject::SetText(const char* txt)
{
	int len = strlen(txt) + 1;
	m_text = new char[len];
	strcpy_s(m_text, sizeof(char) * len, txt);
	NotifyObserver();
}