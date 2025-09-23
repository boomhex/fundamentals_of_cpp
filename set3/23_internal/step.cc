#include "internal_indent.ih"

int &step()
{
    static int stepSize = 4;
    return stepSize;
}
