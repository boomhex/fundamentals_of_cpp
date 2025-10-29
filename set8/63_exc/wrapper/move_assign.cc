#include "wrap.ih"

Wrap &Wrap::operator=(Wrap &&other)
{
    Wrap tmp(move(other));  
    swap(tmp);
    return *this;
}