#include "symbol.ih"

Token Symbol::token()   const
{
    return d_value.token();
}