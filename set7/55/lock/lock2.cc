#include "lock.ih"

Lock::Lock(string const &path, string lockDir)
:
    d_valid(false),
    d_fileDescription(-1)
{
    d_lockPath = lockPath(path, lockDir);

    d_fileDescription = open(d_lockPath.c_str(), 0600); // Open file
    if (d_fileDescription == -1) {  // Opening failed
        d_valid = false;
        return;
    }

    d_valid = flock(d_fileDescription, LOCK_EX);    // Lock file
    if (!d_valid) {     // Lock failed
        close(d_fileDescription);
        d_fileDescription = -1;
    }
}
