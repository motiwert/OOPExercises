#pragma once
#include "BaseBase.h"
#include <stdio.h>
class BaseRight :   public BaseBase
{
public:
    const char* b = "BaseRight";
    BaseRight() { printf(__FUNCTION__); printf(" Ptr=%p\n", this);}
    void Do() { printf(__FUNCTION__); printf(" Ptr=%p\n", this); }
    virtual ~BaseRight() { printf(__FUNCTION__); printf(" Ptr=%p\n", this);}
};

