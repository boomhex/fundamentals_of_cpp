#include "lock.ih"

Lock::Lock(string const &path)
:
    Lock(path, stringName(::dirname, path.c_str()))
{
}