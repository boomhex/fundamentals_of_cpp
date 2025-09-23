#include "indent.h"
#include "internal_indent.ih"

void indent_less()
{
    step_locked() = true;   // lock stepsize after this call

    if (depth() >= step())  // check whether depth is not too small
        depth() -= step();  // to decrement w/ step
    else
        depth() = 0;        // set 0 to not negatively indent.
}