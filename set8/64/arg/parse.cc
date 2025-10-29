#include "arg.ih"

void Arg::parse(char const *optstring, LongOption const *const begin,
            LongOption const *const end, int argc, char **argv)
{
    size_t lOptsSize = end - begin;
    OptStructArray lOpts(lOptsSize + 1);
    parseOpts(lOpts, begin, end);   // Parse long options to fit in structs
    int longidx;
    longidx = -1;
    int ch;
    while ((ch = getopt_long(argc, argv, optstring, lOpts.get(), &longidx)) != -1)
    {
        if (ch != 0)
            addShort(ch, optopt);
        else 
        { // long-only option
            if (lOptsSize and longidx >= 0)
            {
                d_longoption.add(begin[longidx].name());
                ++d_longOnlyCount;
            }
            continue;
        }
    }
    remainingArgs(optind, argc, argv);
}
