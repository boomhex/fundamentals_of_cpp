#include "internal_indent.ih"

bool &step_locked()
{
    static bool stepLocked = false;
    return stepLocked;
}
