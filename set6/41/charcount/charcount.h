#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

struct CharCount
{
    struct Char
    {
        unsigned char ch;
        std::size_t freq;
    };

    struct CharInfo
    {
        Char *ptr = nullptr;
        std::size_t nCharObj = 0;
        std::size_t cap = 0;
    };

    enum Action {APPEND, INSERT, INC, NUM_ACTIONS};      // All actions
    CharInfo d_info;

    public:
        CharCount();
        ~CharCount();

        std::size_t count(std::istream &input);     // count.cc
        CharInfo const &info() const;               // info.i

        std::size_t capacity() const;
    private:
        Action locate(unsigned char ch, std::size_t &index) const;
        static void (CharCount::*d_actions[NUM_ACTIONS]) 
                    (std::size_t idx, unsigned char ch);
        void ensureCapacity(std::size_t minNeeded);
        Char *rawCapacity();                // returns pointer to raw block
        void enlarge();                     // doubles capacity

        void appendChar(std::size_t idx, unsigned char ch);
        void insertChar(std::size_t idx, unsigned char ch);
        void increaseChar(std::size_t idx, unsigned char ch);
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}

inline std::size_t CharCount::capacity() const
{
    return d_info.cap;
}


#endif