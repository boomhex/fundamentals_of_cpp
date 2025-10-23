#include "numbers.ih"

// By: move1.cc
Numbers &Numbers::operator=(Numbers &&tmp)
{
    swap(tmp);
    return *this;
}
