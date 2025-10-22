#include "numbers.ih"

// by: main.cc
void Numbers::write(std::ostream &out)   const
{
    if (d_size > 0)
    {
        out << at(0);   // Prevent leading WS
        for (size_t idx = 1; idx != d_size; ++idx)
            out << ' ' <<  at(idx);
    }
}
