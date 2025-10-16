#include "charcount.ih"

CharCount::Action CharCount::locate(unsigned char ch, size_t &index) const
{
    for (index = 0; index != d_info.nCharObj; ++index)
    {
        if (d_info.ptr[index].ch == ch)     // If char is not new
            return INC;

        if (d_info.ptr[index].ch > ch)      // If char should be inserted
            return INSERT;
    }
    return APPEND;                          // If char should be appended
}
