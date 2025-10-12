#include "symtab.ih"

Symbol &Symtab::find(string const &name)
{
    size_t index = findIdx(name);
    return *d_symbols[index];
}
