#include "numbers.ih"

Numbers::Numbers(size_t count)
:
    d_size(count),
    d_numbers(new int[count])
{
}