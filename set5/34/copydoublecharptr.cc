#include "copycat.ih"

void CopyCat::copyDoubleCharPtr(size_t nElements, char const **ptr)
{
    // d_data = new char*[nElements];
    for (char **begin = ptr, **end = begin + nElements;
         begin != end;
         ++begin)
    {
        // *begin = new char[nElements];
        // copyCharPtr(nElements, begin, *temp);
        cout << *begin <<'\n';
    }
}
