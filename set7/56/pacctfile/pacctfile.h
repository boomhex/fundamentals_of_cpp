#ifndef _INCLUDED_PACCTFILE_
#define _INCLUDED_PACCTFILE_

#include <string>
// #include "acct.h" // Keeping this, since the linux didn't work on my machine
#include "/usr/include/linux/acct.h" // Replacement for linux

class PacctFile
{
    std::string d_path;
    bool d_showAll;

    public:
        PacctFile();    // pacctfile1.cc
        PacctFile(std::string const &path);     // pacctfile2.cc
        PacctFile(std::string const &path, bool showAll);   // pacctfile3.cc

        std::string records()   const;  // gets records from pacct like file
    private:
        void appendRecord(std::string &records, acct_v3 const &record)  const;
        static std::string commToString(char const *comm);
};

#endif