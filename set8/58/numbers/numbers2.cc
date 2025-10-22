#include "numbers.ih"

Numbers::Numbers(Numbers const &other)
:
    d_size(other.d_size),
    d_numbers(new int[d_size])
{
    for (size_t idx = 0; idx != d_size; ++idx)
        at(idx) = other.at(idx);
}