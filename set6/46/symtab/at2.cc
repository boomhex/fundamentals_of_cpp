#include "symtab.ih"

Symbol const &Symtab::at(size_t idx)    const
{
    return *d_symbols[idx];
}
