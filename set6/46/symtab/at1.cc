#include "symtab.ih"

Symbol &Symtab::at(size_t idx)
{
    return *d_symbols[idx];
}
