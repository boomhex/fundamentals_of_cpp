#ifndef INCLUDED_COPYCAT_
#define INCLUDED_COPYCAT_

#include <iosfwd>

class CopyCat
{
    std::size_t d_size;
    char **d_data;

    public:
        // Constructor:
        CopyCat();                          // copies environ copycat1.cc
        CopyCat(std::size_t const argc, char const **argv); // copycat2.cc
        CopyCat(char const **data);               // cp. any environ-like variable copycat3.cc

    private:
        static char **nstbArrCopy(char const **array,       // nstbarrcopy.cc
                                  std::size_t const nElements);
        static char *nstbCopy(char const *nstb,             // nstbcopy.cc
                              std::size_t const length);
        static std::size_t nstbSize(char const *nstb);      //nstbsize.cc
};

#endif
