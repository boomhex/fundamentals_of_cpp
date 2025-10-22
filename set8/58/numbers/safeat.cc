#include "numbers.ih"

// by: at.cc, at1.cc
int &Numbers::safeat(size_t idx)    const
{
    if (idx >= d_size)
        std::cerr << "Requested idx out of bounds.\n";

    return d_numbers[idx];
}
