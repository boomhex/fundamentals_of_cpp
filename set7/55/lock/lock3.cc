#include "lock.ih"

Lock::~Lock()
{
    if (d_fileDescription >= 0) {   // Only close locked file
        close(d_fileDescription);
        d_fileDescription = -1;
    }
}