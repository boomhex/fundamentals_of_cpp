#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    size_t d_capacity = 0;
    std::string **d_str = nullptr;

    public:
        struct POD
        {
            size_t      size;
            size_t      cap;
            std::string **str;
        };

        Strings();
        Strings(size_t argc, char **argv);
        Strings(char **environLike);
        Strings(std::istream &in);
        ~Strings();

        void swap(Strings &other);              

        size_t size() const;
        size_t capacity() const;
        std::string const **data() const;
        POD release();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void reserve(std::size_t n);
        void resize(std::size_t n);

        void add(std::string const &next);          // add another element

    private:
        void fill(char **ntbs);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string **enlarge();


        static size_t count(char **environLike);   // # elements in env.like

        std::string **rawPointers(std::size_t n);
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline size_t Strings::capacity() const
{
    return d_capacity;
}

inline std::string const **Strings::data() const
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

