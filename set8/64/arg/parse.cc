#include "arg.ih"

void Arg::parse(char const *optstring, LongOption const *const begin,
            LongOption const *const end, int argc, char **argv)
{
    size_t lOptsSize = end - begin;
    OptStructArray lOpts(lOptsSize + 1);
    parseOpts(lOpts, begin, end);   // Parse long options to fit in structs
    int longidx;
    longidx = -1;
    int c;
    while ((c = getopt_long(argc, argv, optstring, lOpts.get(), &longidx)) != -1)
    {
        if (c == 0)
        { // long-only option
            if (lOptsSize and longidx >= 0)
            {
                d_longoption.add(begin[longidx].name());
                ++d_longOnlyCount;
            }
            continue;
        }

        switch (c)
        {
            case ':': // required argument
            case '?': // unknown option
                if (optopt != 0)
                    d_shortoption.add(static_cast<unsigned char>(optopt));
            break;

            default:
                d_shortoption.add(c);
            break;
        }
    }
    remainingArgs(optind, argc, argv);
}
