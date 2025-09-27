#include "main.ih"

void callRef(string const &prog)
{
    for (size_t idx = 0; idx < 100000000; ++idx)
        fun2(prog);
}