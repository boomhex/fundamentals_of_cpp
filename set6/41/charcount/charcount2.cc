#include "charcount.ih"

CharCount::~CharCount()
{
    delete[] d_info.ptr;
}
