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

<<<<<<< HEAD
#include "info.f"
=======
#include "info.i"
>>>>>>> f54d806b30235669e0100e5e76d0895aece4203e
