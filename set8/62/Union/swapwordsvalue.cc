#include "union.ih"

void Data::swapWordValue(Data &other)
{
    size_t tmp = other.u_value;
    new (&other.u_word) string(move(u_word));
    u_word.~basic_string();
    u_value = tmp;
}