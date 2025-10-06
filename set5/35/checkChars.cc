#include "charcount.h"

bool CharCount::checkChars(char ch, size_t &index)
{
    for (index = 0; index < d_info.nCharObj; ++index) {
        if (d_info.ptr[index].ch == ch)
            return true;
        if (d_info.ptr[index].ch > ch)
            return false;
    }
    return false;
}