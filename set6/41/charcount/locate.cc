#include "charcount.ih"

CharCount::Action CharCount::locate(size_t &idx, unsigned char ch) const
{
    for (idx = 0; idx != d_info.nCharObj; ++idx)
    {
        if (d_info.ptr[idx].ch == ch)     // If char is not new
            return INC;

        if (d_info.ptr[idx].ch > ch)      // If char should be inserted
            return INSERT;
    }
    return APPEND;                          // If char should be appended
}
