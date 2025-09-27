#include "indent.h"
#include "internal_indent.ih"

void reset_indentation()
{
    step_locked() = true;   // lock step after first call
    depth() = 0;
}