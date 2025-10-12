#include "charcount.ih"

void CharCount::increaseChar(size_t idx, unsigned char)
{
    ++d_info.ptr[idx].freq;
}