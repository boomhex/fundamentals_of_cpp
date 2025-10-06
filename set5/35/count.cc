#include "charcount.h"

int CharCount::count(istream &input)
{
    char inCh;
    while (input.get(inCh))
    {
        size_t index = 0;
        size_t check  = checkChars(inCh, index);
        if (check == 1)
            ++d_info.ptr[index].freq;
        else
        {
            Char *newArr = new Char[d_info.nCharObj + 1];
            for (size_t idx = 0; idx < index; ++idx)
                newArr[idx] = d_info.ptr[idx];

            newArr[index].ch = inCh;
            newArr[index].freq = 1;

            for (size_t idx = index; idx < d_info.nCharObj; ++idx)
                newArr[idx+1] = d_info.ptr[idx];
            
            
            d_info.ptr = newArr;
            ++d_info.nCharObj;
        }
        // for (size_t i = 0; i < d_info.nCharObj; ++i)
        // {
        //     cout << i << ": " << d_info.ptr[i].ch << ": " << d_info.ptr[i].freq << '\n';
        // }
    }
    return 0;
}