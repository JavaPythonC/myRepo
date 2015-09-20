#include "Father.h"
#include "Child.h"


class Grandson : public Father, public Child 
{
public:
    Grandson();
    virtual void claim();
};
