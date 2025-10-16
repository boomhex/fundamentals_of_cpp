#include "charcount.ih"

void CharCount::ensureCapacity(size_t minNeeded)
{
     if (minNeeded > d_info.cap)    // allocate new memory if needed
        enlarge();              
}