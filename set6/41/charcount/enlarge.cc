#include "charcount.ih"

void CharCount::enlarge()
{
    size_t newCap = d_info.cap * 2;         // doubles size
    Char *newBlock = new Char[newCap];

    // copy all elements into new array
    for (size_t idx = 0; idx != d_info.nCharObj; ++idx)
        newBlock[idx] = d_info.ptr[idx];

    delete[] d_info.ptr;                    // delete old pointer
    d_info.ptr = newBlock;
    d_info.cap = newCap;
}