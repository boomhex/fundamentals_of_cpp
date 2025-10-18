#include "fch.ih"

int Fch::run()
{
    if (!d_opened)
        return 1;
    while (getline(*d_input, d_line))
        process();
    return 0;
}