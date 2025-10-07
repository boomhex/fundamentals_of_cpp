#include "copycat.ih"


void CopyCat::display()
{
    for (size_t index = 0; index != d_size; ++index)
        cout << d_data[index] << '\n';
}