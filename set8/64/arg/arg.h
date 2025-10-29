#ifndef INCLUDED_ARG_
#define INCLUDED_ARG_

#include "../argoption/argoption.h"
#include "../arglongoption/arglongoption.h"
#include "../optstructarray/optstructarray.h"

#include <string>
#include <iosfwd>
#include <getopt.h>
#include <string>
using OptStruct = option;

class Arg
{
    enum Type
    {
        None,
        Required,
        Optional
    };

    std::string const d_optString;
    ArgOption d_shortoption;
    ArgLongOption d_longoption;
    size_t d_longOnlyCount;
    size_t d_nArgs;
    std::string *d_args;
    std::string d_basename;


    inline static Arg *s_instance = 0;
    inline static bool s_initialized = false;

    public:
        Arg(Arg const &other) = delete;
        class LongOption;

        static Arg &initialize(char const *optstring,   // 1.cc
            int argc, char **argv);
        static Arg &initialize(char const *optstring,   // 2.cc
            LongOption const *const begin,
            LongOption const *const end,
            int argc, char **argv);

        Arg const &instance();

        char const *arg(unsigned idx) const;            // 3.cc

        // std::string const &basename()   const;  // removed const bc compiler of
                                        // mailhandler?
        size_t nArgs() const;   // non-option args
        size_t nOptions() const;    // number of options

        size_t option(int opt) const;                           // 1.cc
        size_t option(std::string const &options) const;        // 2.cc
        size_t option(std::string *value, int option) const;    // 3.cc
        size_t option(std::string *value,                       // 4.cc
                      char const *longOption) const; 

    private:
        Arg(char const *optstring, int argc, char **argv);      // 1.cc
        Arg(char const *optstring, LongOption const *const begin,   // 2.cc
            LongOption const *const end, int argc, char **argv);
        ~Arg();                                                    

        std::string makeBasename(char *basepath)    const;
        void parse(char const *optstring, LongOption const *const begin,
            LongOption const *const end, int argc, char **argv);
        void parseOpts(OptStructArray &lopts, LongOption const *const begin,
            LongOption const *const end);
        int longOptionSize(LongOption const *const begin,
            LongOption const *const end)    const;
        void copyToOptStruct(OptStruct *opts,
            LongOption const *const begin, size_t idx)      const;
        void remainingArgs(size_t optind, size_t argc, char **argv);
        void addShort(int ch, int optopt);
};

class Arg::LongOption
{
    char const *d_name;
    Arg::Type d_type;
    int d_shortOption;

    public:
        LongOption(char const *name, Arg::Type type = Arg::None);
        LongOption(char const *name, int optionChar);

        char const *name()  const;
        Arg::Type type()    const;
        int shortoption()   const;
};

#endif