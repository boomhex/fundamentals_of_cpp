#include "charcount.ih"

CharCount::Action CharCount::locate(char ch, size_t &index) const
{
    for (index = 0; index != d_info.nCharObj; ++index)
    {
        if (d_info.ptr[index].ch == ch)     // if char is not new
            return INC;

        if (d_info.ptr[index].ch > ch)      // if char should be inserted
            return INSERT;
    }
    return APPEND;                          // if char should be appended
}