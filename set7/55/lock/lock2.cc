#include "lock.ih"

Lock::Lock(string const &path, string lockDir)
:
    d_valid(false),
    d_fileDescription(-1)
{
    d_lockPath = lockPath(path, lockDir);

    int flags = filesystem::exists(d_lockPath) ?
                O_RDWR : (O_CREAT | O_TRUNC | O_RDWR);

    d_fileDescription = open(d_lockPath.c_str(), flags, 0600); // Open file

    if (d_fileDescription == -1) {  // Opening failed
        d_valid = false;
        return;
    }

    int lock = flock(d_fileDescription, LOCK_EX);   // Lock file
    d_valid = (lock == 0);
    if (not d_valid)     // Lock failed
    {
        close(d_fileDescription);
        d_fileDescription = -1;
    }
}
