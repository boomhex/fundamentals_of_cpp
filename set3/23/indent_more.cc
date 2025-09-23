#include "indent.h"
#include "internal_indent.ih"

void indent_more()
{
    step_locked() = true;   // lock the stepsize after this is called
    depth() += step();  // increment depth w/ the set stepsize
}
