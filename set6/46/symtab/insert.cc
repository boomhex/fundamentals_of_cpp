#include "symtab.ih"

void Symtab::insert(size_t idx, Symbol *symbolPtr)
{
    // Grow capacity if needed
    if (d_size == d_capacity)
        enlarge(d_capacity * 2);

    // Shift elements to right behind idx
    for (size_t startShiftIdx = d_size; startShiftIdx != idx; --startShiftIdx)
        d_symbols[startShiftIdx] = d_symbols[startShiftIdx-1];

    // Assign new inserted ptr
    d_symbols[idx] = symbolPtr;
    ++d_size;
}