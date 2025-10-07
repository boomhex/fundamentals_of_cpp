#include "charcount.ih"

size_t CharCount::count(istream &input)
{
    size_t total = 0;
    char inCh;
    while (input.get(inCh))
    {
        size_t index = 0;                   // keeps track of char position
        // checks for action and position of char
        Action action  = locate(inCh, index);    
        if (action == INC)        // If the char is not new increase frequency
            ++d_info.ptr[index].freq;
        else
        {
            // make new array that is 1 element bigger
            Char *newArr = new Char[d_info.nCharObj + 1];
            // copy the old array on to the new array until the new char
            for (size_t idx = 0; idx < index; ++idx)
                newArr[idx] = d_info.ptr[idx];


            newArr[index].ch = inCh;    // put new char in
            newArr[index].freq = 1;

            // copy the remaining old array on to the new array
            for (size_t idx = index; idx < d_info.nCharObj; ++idx)
                newArr[idx+1] = d_info.ptr[idx];

            delete[] d_info.ptr;    // delete old array
            d_info.ptr = newArr;    // set new array as current array
            ++d_info.nCharObj;
        }
        ++total;
    }
    return total;
}