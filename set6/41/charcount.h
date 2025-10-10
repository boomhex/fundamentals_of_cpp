#include <iostream>

struct Char
{
    unsigned char ch;
    std::size_t freq;
};

struct CharInfo
{
    Char *ptr = new Char[8];
    std::size_t nCharObj = 8;
};

struct CharCount
{
    enum Action {APPEND, INSERT, INC};      // All actions
    CharInfo d_info;

    public:
        std::size_t count(std::istream &input);     // count.cc
        CharInfo const &info() const;               // info.i
    private:
        Action locate(unsigned char ch, std::size_t &index) const;    // locate.cc
};

#include "info.i"
