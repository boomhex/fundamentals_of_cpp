#include "symtab.ih"

size_t Symtab::findIdx(string const &ident)
{
    size_t begin = 0;
    size_t end = d_size;
    size_t mid = (begin + end) / 2;

    while (begin != end)
    {
        mid = (begin + end) / 2;

        if (d_symbols[mid]->ident() < ident)      // Check lexicographic order
            begin = mid + 1;                           // And half search space
        else
            end = mid;
    }

    // Check if the name is found in existing array
    if (begin < d_size && d_symbols[begin]->ident() == ident)
        return begin;

    // Create the new symbol if not found
    Symbol *newSymbol = new Symbol(ident, 0);
    insert(begin, newSymbol);
    return begin;
}
