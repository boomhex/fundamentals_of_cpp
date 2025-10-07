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
        CopyCat(std::size_t argc, char **argv); // copycat2.cc
        CopyCat(char **data);               // cp. any environ-like variable copycat3.cc

    private:
        static char **ntbsArrCopy(char *const *array,       // ntbsarrcopy.cc
                                  std::size_t const nElements);
        static char *ntbsCopy(char const *ntbs,             // ntbscopy.cc
                              std::size_t const length);
        static std::size_t ntbsSize(char const *ntbs);      //ntbssize.cc
};

#endif
