#ifndef INCLUDED_COPYCAT_
#define INCLUDED_COPYCAT_

#include <iosfwd>

class CopyCat
{

    size_t d_size;
    char **d_data;

    public:
        CopyCat();                          // copies environ
        CopyCat(size_t argc, char **argv);
        //CopyCat(char **data);               // cp. any environ-like variable

        void display();

    private:
        static void copyDoubleCharPtr(size_t nElements, char const **ptr);
        static void copyCharPtr(size_t nElements, char *ptr, char *destination);
};

#endif
