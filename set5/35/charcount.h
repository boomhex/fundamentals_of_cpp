#include <iostream>

struct Char
{
    char ch;
    size_t freq;
};

struct CharInfo
{
    Char *ptr = nullptr;
    size_t nCharObj = 0;
};

struct CharCount
{
    enum Action {APPEND, INSERT, INC};      // All actions
    CharInfo d_info;
    
    public:
        size_t count(std::istream &input);     // count.cc
        CharInfo const &info() const;       // inline function
    private:
        Action locate(char ch, size_t &index) const;    // locat.cc
};