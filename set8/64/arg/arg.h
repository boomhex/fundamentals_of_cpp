#ifndef _INCLUDED_ARG_
#define _INCLUDED_ARG_

#include "./../argoption/argoption.h"
#include "./../arglongoption/arglongoption.h"

#include <string>

class Arg
{
    enum Type
    {
        None,
        Required,
        Optional
    };

    char const *d_optstring;
    size_t d_nOptions;
    size_t d_nArgs;

    static Arg *s_instance;
    static bool s_initialized;

    public:
        class LongOption;


        // Part of singleton:::
        static Arg &initialize(char const *optstring,   // 1.cc
            int argc, char **argv);
        static Arg &initialize(char const *optstring,   // 2.cc
            LongOption const *const begin,
            LongOption const *const end,
            int argc, char **argv);

        Arg &instance();

        char const *arg(unsigned idx) const;

        std::string const &basename() const;

        size_t nArgs() const;   // non-option args
        size_t nOptions() const;    // number of options

        size_t option(int opt) const;                           // 1.cc
        // Returns the number of provided options. If single character options (or their long option equivalents) 
        // are multiply specified, then each specification is counted as one option (so -v -v counts as two options).
        size_t option(std::string const &options) const;        // 2.cc
        size_t option(std::string *value, int option) const;    // 3.cc
        size_t option(std::string *value,                       // 4.cc
            char const *longOption) const; 

    private:
        Arg(char const *optstring, int argc, char **argv);      // 1.cc
        Arg(char const *optstring, LongOption const *const begin,   // 2.cc
            LongOption const *const end, int argc, char **argv);
};

class Arg::LongOption
{
    char const *d_name;
    Arg::Type d_type;
    int d_shortOption;

    public:
        LongOption(char const *name, Arg::Type type = Arg::None);
        LongOption(char const *name, int optionChar);
};

#endif