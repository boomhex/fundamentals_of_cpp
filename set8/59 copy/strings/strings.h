#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    std::string *d_str;
    size_t d_iterations;

    std::string *(Strings::*d_enlarge)();
    public:
        struct POD
        {
            size_t      size;
            std::string *str;
        };

        Strings();                                  // 1.cc
        Strings(int argc, char **argv);             // 2.cc
        Strings(char **environLike);                // 3.cc
        Strings(std::istream &in);                  // 4.cc
        Strings(size_t nIterate, bool copy = true); // 5.cc

        void iterate(char **environLike);

        void swap(Strings &other);              

        size_t size() const;
        std::string const *data() const;
        POD release();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void add(std::string const &next);          // add another element

    private:
        void fill(char *ntbs[]);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string *enlarge();
        std::string *enlargeByCopy();
        std::string *enlargeByMove();
        void destroy();

        static size_t count(char *environLike[]);   // # elements in env.like
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}

        
#endif

