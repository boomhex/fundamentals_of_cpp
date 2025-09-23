#include "indent.h"
#include "internal_indent.ih"

void step_size(int setSize)
{
    if (!step_locked())
        step() = setSize;
}
