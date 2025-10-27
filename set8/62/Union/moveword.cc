#include "union.ih"

void Data::moveWord(Data &src)
{
    new (&u_word) string(move(src.u_word));
}