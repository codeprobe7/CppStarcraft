#pragma once
#include "Unit.h"

class AMarine : public Unit
{
public:

    using Unit :: Unit;

    void Info() override;
    
    ~AMarine() override
    {
    }
};
