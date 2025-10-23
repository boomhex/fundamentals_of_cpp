#ifndef _INCLUDED_NUMBERS_
#define _INCLUDED_NUMBERS_

#include <iosfwd>

class Numbers
{
    size_t d_size = 0;
    int *d_numbers = 0;

    public:
        Numbers(size_t count);              
        Numbers(size_t count, int value);               // 1.cc
        Numbers(Numbers const &other);      // Copy ctor   2.cc
        Numbers(Numbers &&tmp);                         // move.cc
        Numbers &operator=(Numbers const &other);       // move1.cc
        Numbers &operator=(Numbers &&tmp);              // move2.cc
        ~Numbers();

        int &at(size_t idx);
        int at(size_t idx)    const;  // 1.cc
        void write(std::ostream &out)  const;
        size_t length()     const;


    private:
        int &safeat(size_t idx)     const;
        void swap(Numbers &other);
};

#endif