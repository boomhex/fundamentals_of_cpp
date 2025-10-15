#include "fch.ih"

Fch::Fch(char const *fname)
{
    if (openInput(fname))
        searchReplace();
}