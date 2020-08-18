#pragma once
#include "BaseBase.h"
#include <stdio.h>
class BaseLeft : public BaseBase
{
public:
	const char* b = "BaseLeft";
	BaseLeft() { printf(__FUNCTION__); printf(" Ptr=%p\n", this);	}
	void Do() { printf(__FUNCTION__); printf(" Ptr=%p\n", this); }
	virtual ~BaseLeft() { printf(__FUNCTION__);; printf(" Ptr=%p\n", this);	}
};

