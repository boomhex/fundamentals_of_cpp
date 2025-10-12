#include "charcount.ih"

void CharCount::appendChar(size_t, unsigned char ch)
{
    ensureCapacity(d_info.nCharObj + 1);
    d_info.ptr[d_info.nCharObj++] = Char{ch, 1};
}