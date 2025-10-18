#include "lock.ih"

string const Lock::lockPath(string const& path, string const& lockDir)    const
{
    string base = stringName(path.c_str(), basename);
    string out = lockDir + "/" + (base + ".lck");
    return out;
}
