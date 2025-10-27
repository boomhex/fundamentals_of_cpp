#include "union.ih"

Data::Data(string const &word)
{
    new (&u_word) string(word);
}