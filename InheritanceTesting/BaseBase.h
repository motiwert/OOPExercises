#pragma once
#include <stdio.h>
class BaseBase
{
public:
	const char* b = "BaseBase";
	BaseBase() { printf(__FUNCTION__); printf(" Ptr=%p\n", this); }
	void Do() { printf(__FUNCTION__); printf(" Ptr=%p\n", this); }
	virtual ~BaseBase() { printf(__FUNCTION__); printf(" Ptr=%p\n", this); }
};

