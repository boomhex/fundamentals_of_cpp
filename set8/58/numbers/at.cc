#include "numbers.ih"

// By: numbers1.cc
int &Numbers::at(size_t idx)
{
    return safeat(idx);
}
