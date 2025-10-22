#include "lock.ih"

Lock::~Lock()
{
    if (d_fileDescription >= 0) {   // Only close when locked file
        close(d_fileDescription);
        d_fileDescription = -1;
    }
}
