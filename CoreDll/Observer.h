#pragma once
class Observer
{
private:
	void* m_subject;
public:
	virtual void Notify() = 0;
};

