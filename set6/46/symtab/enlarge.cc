#include "symtab.ih"

void Symtab::enlarge(size_t newCap)
{
    Symbol **newPtr = new Symbol*[newCap]();

    for (size_t idx = 0; idx != d_size; ++idx)
        newPtr[idx] = d_symbols[idx];   // Copy pointers

    delete[] d_symbols;     // Free old array of pointers
    d_symbols = newPtr;
    d_capacity = newCap;
}