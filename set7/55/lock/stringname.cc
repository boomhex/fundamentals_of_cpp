#include "lock.ih"

string Lock::stringName(char *(*funcPointer)(char*), char const *path)
{
    size_t pathLen = sizeof(path) / sizeof(char);
    char* pathCopy = new char[pathLen];
    for (size_t idx = 0; idx != pathLen; ++idx) // Copy elements to avoid char*
        pathCopy[idx] = path[idx];              // const complaint

    string result{ funcPointer(pathCopy) };
    delete[] pathCopy;
    return result;
}
