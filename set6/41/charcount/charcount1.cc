#include "charcount.ih"

CharCount::CharCount()
{
    d_info.cap  = 8;
    d_info.ptr  = new Char[d_info.cap];
    d_info.nCharObj = 0;
}
