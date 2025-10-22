#include "fch.ih"

Fch::Fch(char const *fname)
{
    d_opened = openInput(fname);
    if (d_opened)
        searchReplace();
}