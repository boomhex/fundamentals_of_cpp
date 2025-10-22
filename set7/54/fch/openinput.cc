#include "fch.ih"

bool Fch::openInput(char const *fname)
{
    static fstream fs;
    fs.clear();
    fs.open(fname);
    if (!d_input)
        return false;
    d_input = &fs;
    return true;
}