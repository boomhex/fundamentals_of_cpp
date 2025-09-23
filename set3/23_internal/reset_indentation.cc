#include "indent.h"
#include "internal_indent.ih"

void reset_indentation()
{
    step_locked() = true;   // lock step after this call
    depth() = 0;    // set depth to 0
}