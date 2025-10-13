#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
    {
        string **tmp = enlarge();       // make room for the next string,
        delete[] d_str;                     // return old memory
        d_str = tmp;                        // update d_str and d_size
    }
    d_str[d_size++] = new string(next);
}
