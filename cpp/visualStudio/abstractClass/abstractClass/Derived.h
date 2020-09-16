#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

class Derived :
    public Base
{
private:
    void doDone(int value);

public:
    Derived();   // Constructor
    ~Derived();  // Destructor
    void Run();
};

#endif

