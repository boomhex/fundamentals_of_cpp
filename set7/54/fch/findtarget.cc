#include "fch.ih"

bool Fch::findTarget()
{
    size_t next = d_line.find(d_target, d_pos);
    if (next == string::npos)
        return false;

    d_pos = next;
    return true;
}