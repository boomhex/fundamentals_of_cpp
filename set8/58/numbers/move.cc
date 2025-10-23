#include "numbers.ih"

Numbers::Numbers(Numbers &&tmp)
:
    d_size(tmp.d_size),
    d_numbers(tmp.d_numbers)
{
    tmp.d_size = 0;     // Avoid dtor tmp destroying ptr data.
    tmp.d_numbers = 0;
}
