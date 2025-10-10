#include <iostream>

struct Char
{
    unsigned char ch;
    std::size_t freq;
};

struct CharInfo
{
    Char *ptr = nullptr;
    std::size_t nCharObj = 0;
};

struct CharCount
{
    enum Action {APPEND, INSERT, INC};      // All actions
    CharInfo d_info;
    
    public:
        std::size_t count(std::istream &input);     // count.cc
        CharInfo const &info() const;       // inline function
    private:
        Action locate(unsigned char ch, std::size_t &index) const;    // locat.cc
};

#include "info.i"
