#include "symbol.ih"

Symbol::CompareResult Symbol::compare(string const &rhs)    const
{
    if (d_name == rhs)
        return EQUAL;
    return (d_name < rhs) ? LHS_FIRST : RHS_FIRST;
}
