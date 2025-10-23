#include "numbers.ih"

int Numbers::at(size_t idx)    const
{
    return safeat(idx);
}
