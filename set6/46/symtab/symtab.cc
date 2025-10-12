#include "symtab.ih"

Symtab::Symtab()
{
    d_capacity = 0;
    d_size = 0;
    d_symbols = 0;
    enlarge(8);
}
