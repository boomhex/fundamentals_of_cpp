#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

struct CharCount
{
    struct Char
    {
        unsigned char ch;
        size_t freq;
    };

    struct CharInfo
    {
        Char *ptr = nullptr;
        size_t nCharObj = 0;
        size_t cap = 0;
    };

    enum Action
    {
        APPEND, 
        INSERT, 
        INC, 
        NUM_ACTIONS
    };      // All actions
    CharInfo d_info;

    public:
        CharCount();
        ~CharCount();

        size_t count(std::istream &input);     // count.cc
        CharInfo const &info() const;               // info.i

        size_t capacity() const;
    private:
        Action locate(size_t &idx, unsigned char ch) const;
        static void (CharCount::*d_actions[NUM_ACTIONS]) 
                    (size_t idx, unsigned char ch);
        void ensureCapacity(size_t minNeeded);
        Char *rawCapacity();                // returns pointer to raw block
        void enlarge();                     // doubles capacity

        void appendChar(size_t idx, unsigned char ch);
        void insertChar(size_t idx, unsigned char ch);
        void increaseChar(size_t idx, unsigned char ch);
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}

inline size_t CharCount::capacity() const
{
    return d_info.cap;
}


#endif