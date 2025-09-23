#include "indent.h"
#include "internal_indent.ih"

void indent_less()
{
    step_locked() = true;   // lock stepsize after first call

    if (depth() >= step())  // check depth is sufficient.
        depth() -= step();
    else
        depth() = 0;        // set 0 to not negatively indent.
}