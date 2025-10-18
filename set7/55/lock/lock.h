#ifndef _INCLUDED_LOCK_
#define _INCLUDED_LOCK_

#include <iosfwd>
#include <string>

class Lock
{
    bool d_valid;
    std::string d_lockPath;
    int d_fileDescription;

    public:
        Lock(std::string const &path);                      // lock1.cc
        Lock(std::string const &path, std::string lockDir); // lock2.cc
        ~Lock();                                            // lock3.cc

        bool valid()    const;

    private:
        static std::string stringName(std::string const &path,
                                      char *(*funcPointer)(char*));
        std::string const lockPath(std::string const &path,
            std::string const &lockDir)    const;

};

#endif