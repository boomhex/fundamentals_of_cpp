#include "indent.h"
#include "internal_indent.ih"

void step_size(int setSize)
{
    if (!step_locked())     // only allow change when not locked
        step() = setSize;
}
