#include "wrap.ih"

Wrap::Wrap(string const &word)
: 
    d_tag(Data::WORD),  
    d_mt(Data(word)) 
{

}