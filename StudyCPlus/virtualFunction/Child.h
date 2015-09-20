#ifndef _MY1_
#define _MY1_

#include "Father.h"

class Child : public Father
{
public:
    Child();
    virtual void claim();
};

#endif
