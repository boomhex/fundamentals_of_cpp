#include "lock.ih"

string const Lock::lockPath(string const& path, string const& lockDir)    const
{
    string base = stringName(::basename, path.c_str());
    string out = lockDir + "/" + (base + ".lck");
    return out;
}
