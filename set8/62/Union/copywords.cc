#include "union.ih"

void Data::copyWord(Data const &src)
{
    new (&u_word) string(src.u_word);
}