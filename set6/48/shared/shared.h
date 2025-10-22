#ifndef _INCLUDED_SHARED_
#define _INCLUDED_SHARED_

#include "../data/data.h"
#include <iosfwd>

class Shared
{
    int d_id;                               // the ID of the shared segment

    public:
        Shared();

        bool create(size_t nValues);        // a shared segment for Data with
                                            // d_data having nValues elements

        Data *connect();                    // connects segment d_id      1.cc
        Data *connect(char const *id);      // connects segment id (NTBS) 2.cc

        int id() const;                     // inline, returns d_id

                                            // disconnect a shared segment 
        static bool disconnect(Data const *ptr);
        static bool kill(int id);           // delete a shared segment
};

#endif