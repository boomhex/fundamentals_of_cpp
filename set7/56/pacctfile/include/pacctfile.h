#ifndef _INCLUDED_PACCTFILE_
#define _INCLUDED_PACCTFILE_

#include <string>
#include "acct.h"
// #include "/usr/include/linux/acct.h"

class PacctFile
{
    std::string d_path;
    bool d_showAll;

    public:
        PacctFile();
        PacctFile(std::string const &path);
        PacctFile(std::string const &path, bool showAll);

        std::string records()   const;
    private:
        void appendRecord(std::string &records, acct_v3 const &record)  const;
        static std::string commToString(char const *comm);
};

#endif