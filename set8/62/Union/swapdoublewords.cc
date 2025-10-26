#include "union.ih"

void Data::swapDoubleWord(Data &other)
{
    string tmp(move(other.u_word));
    other.u_word.~basic_string();
    other.u_double = u_double;
    new (&u_word) string(move(tmp));
}