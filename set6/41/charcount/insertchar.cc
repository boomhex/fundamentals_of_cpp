#include "charcount.ih"


void CharCount::insertChar(size_t idx, unsigned char ch)
{
    ensureCapacity(d_info.nCharObj + 1);     // checks if new memory is needed

    // shift everything after index to the right 
    for (size_t count = d_info.nCharObj; count != idx; --count)
        d_info.ptr[count] = d_info.ptr[count - 1];

    d_info.ptr[idx] = Char{ch, 1};          // insert char
    ++d_info.nCharObj;
}