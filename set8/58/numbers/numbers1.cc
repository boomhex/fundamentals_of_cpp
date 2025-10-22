#include "numbers.ih"

Numbers::Numbers(size_t count, int value)
:
    Numbers(count)
{
    for (size_t idx = 0; idx != d_size; ++idx)
        at(idx) = value;
}
