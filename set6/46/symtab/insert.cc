#include "symtab.ih"

void Symtab::insert(size_t idx, Symbol *symbolPtr)
{
    // Grow capacity if needed (double, start at 8)
    if (d_size == d_capacity)
        enlarge(d_capacity ? d_capacity * 2 : 8);

    for (size_t startShiftIdx = d_size; startShiftIdx != idx; --startShiftIdx)
        d_symbols[startShiftIdx] = d_symbols[startShiftIdx-1];

    d_symbols[idx] = symbolPtr;
    ++d_size;
}