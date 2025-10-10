#include "charcount.ih"

size_t CharCount::count(istream &input)
{
    size_t total = 0;
    char inCh;

    while (input.get(inCh))
    {
        size_t index = 0;   // Keeps track of char position

        Action action  = locate(inCh, index);   // Get the action and adjust index.

        if (action == INC)        // Increase frequency, or add new char to arr
            ++d_info.ptr[index].freq;
        else
        {
            // Create increased array
            Char *newArr = new Char[d_info.nCharObj + 1];

            for (size_t idx = 0; idx < index; ++idx)
                newArr[idx] = d_info.ptr[idx];      // Copy old arr into new
                                                    // until new char
            newArr[index].ch = inCh;    // Add new char
            newArr[index].freq = 1;

            for (size_t idx = index; idx < d_info.nCharObj; ++idx)
                newArr[idx+1] = d_info.ptr[idx];    // Copy rest of old to new

            delete[] d_info.ptr;    // Del old array
            d_info.ptr = newArr;    // Set new array as current array
            ++d_info.nCharObj;
        }
        ++total;
    }
    return total;
}
