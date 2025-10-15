#include "fch.ih"

bool Fch::openInput(char const *fname)
{
    fstream fs{ fname, ios::in | ios::out};
    if (!fs)
        return false;
    d_input = &fs;
    return true;
}