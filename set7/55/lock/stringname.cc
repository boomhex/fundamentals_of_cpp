#include "lock.ih"

// static
string Lock::stringName(string const &path, char *(*funcPointer)(char*))
{
    string pathCopy = path;     // Copy to protect data
    string result{ funcPointer(pathCopy.data()) };  // Use .data() member for
    return result;                                  // non-const input
}
