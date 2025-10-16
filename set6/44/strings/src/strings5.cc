#include "../include/strings.ih"

Strings::~Strings()
{
    for (size_t idx = 0; idx != d_size; ++idx)
    {
        delete d_str[idx];
    }
    delete[] d_str;
}
