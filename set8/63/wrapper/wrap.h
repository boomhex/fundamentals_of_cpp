// Wrap.h
#ifndef INCLUDED_WRAP_H_
#define INCLUDED_WRAP_H_

#include <cstddef>
#include <string>
#include "../../62/Union/union.h"

class Wrap
{
    Data::Type d_tag;   // active type
    Data d_mt;    // the unrestricted union

  public:
    // constructors for each type
    Wrap(size_t value);
    Wrap(std::string const &word);
    Wrap(double const *ten); 

    // constructors move/copy
    Wrap(Wrap const &other);
    Wrap(Wrap &&other);
    ~Wrap();

    // assignment
    Wrap &operator=(Wrap const &other);
    Wrap &operator=(Wrap &&other);

    // observers (read-only access)
    Data::Type tag() const;
    size_t value() const;
    std::string const &word() const;
    double const *doubleptr() const;

    // utility
    void swap(Wrap &other);

  private:
    double *copy10(double const *src);
};

#endif