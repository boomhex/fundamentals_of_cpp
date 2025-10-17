#include "../include/strings.ih"

string *Strings::rawStrings(size_t nStrings)
{
    // one big raw block; NOT an array-new (no default-construct)
    return static_cast<std::string *>(
        ::operator new(nStrings * sizeof(std::string)));
}
