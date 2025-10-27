#include "wrap.ih"

Wrap &Wrap::operator=(Wrap const &other)
{
    Wrap tmp(other);
    swap(tmp);
    return *this;
}