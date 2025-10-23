#include "numbers.ih"

// by: move2.cc
void Numbers::swap(Numbers &other)
{
    std::swap(d_numbers, other.d_numbers);
    std::swap(d_size, other.d_size);
}
