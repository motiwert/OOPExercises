#pragma once
#include "BaseLeft.h"
#include "BaseRight.h"
#include <stdio.h>
class Inherited :
     public BaseLeft,
     public BaseRight
{
public:
    const char* b = "Inherited";
    Inherited() { printf(__FUNCTION__); printf(" Ptr=%p\n", this);    }
    
    virtual ~Inherited() { printf(__FUNCTION__); printf(" Ptr=%p\n", this);    }
};

