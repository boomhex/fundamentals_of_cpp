#ifndef INCLUDED_SYMTAB_H_
#define INCLUDED_SYMTAB_H_

#include <iosfwd>
#include "symbol.h"
#include "token.h"

class Symtab
{
    Symbol **d_symbols;
    std::size_t d_size;
    std::size_t d_capacity;

    public:
        Symtab();   // symtab.cc
        ~Symtab();  // symtabfree.cc

        Symbol &find(std::string const &name);     // find.cc
        std::size_t findIdx(std::string const &name);  // findidx.cc

        std::size_t size()  const;  // size.cc

        Symbol &at(std::size_t index);              // at1.cc
        Symbol const &at(std::size_t index) const;  // at2.cc

    private:
        void enlarge(std::size_t newCap);   // enlarge.cc

        void insert(size_t idx, Symbol *symbolPtr);     // insert.cc
};


#endif
