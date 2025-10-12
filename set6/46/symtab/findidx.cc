#include "symtab.ih"

size_t Symtab::findIdx(string const &ident)
{
    size_t left = 0;
    size_t right = d_size;
    size_t mid = (left + right) / 2;

    while (left < right)
    {
        mid = (left + right) / 2;

        if (d_symbols[mid]->ident() < ident)      // Check lexicographic order
            left = mid + 1;                           // And half search space
        else
            right = mid;
    }

    // Check if the name is found in existing array
    if (left < d_size && d_symbols[left]->ident() == ident)
        return left;

    // Create the new symbol if not found
    Symbol *newSymbol = new Symbol(ident, 0);
    insert(left, newSymbol);
    return left;
}
