#include <iostream>

using namespace std;

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

class CharCount
{
    CharInfo d_info;

    public:
        int count(istream &input);
        const CharInfo& info() const { return d_info; } // change!!
    private:
        
        bool checkChars(char ch, size_t &index);
};