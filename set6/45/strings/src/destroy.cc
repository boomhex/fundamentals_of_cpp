#include "../include/strings.ih"

void Strings::destroy()
{
    for (string *strPtr = d_str + d_size; strPtr-- != d_str; )
        strPtr->~string();

    operator delete(d_str);
}
