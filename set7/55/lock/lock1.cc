#include "lock.ih"

Lock::Lock(string const &path)
:
    Lock(path, stringName(path.c_str(), dirname))
{
}