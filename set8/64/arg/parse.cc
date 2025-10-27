#include "arg.ih"

void Arg::parse(char const *optstring, LongOption const *const begin,
            LongOption const *const end, int argc, char **argv)
{
    cout << "reaches\n";
    size_t lOoptsSize = begin - end;
    OptStructArray lOpts(lOoptsSize);
    cout << "reaches1\n";
    parseOpts(lOpts, begin, end);

    cout << "reaches2\n";
    int longidx;
    longidx = -1;
    int c;
    while ((c = getopt_long(argc, argv, optstring, lOpts.get(), &longidx)) != -1)
    {
        if (c == 0)
        { // long-only option (no short synonym)
            if (lOoptsSize and longidx >= 0)
            {
                // record by its long name; your ArgLongOption reads optarg
                d_longoption.add(begin[longidx].name());
                ++d_longOnlyCount;   // include in nOptions()
            }
            continue;
        }

        switch (c)
        {
            case ':': // missing required argument (because of leading ':')
            case '?': // unknown option
                if (optopt != 0)
                    d_shortoption.add(static_cast<unsigned char>(optopt));
            break;

            default:
                // valid short OR long with short synonym; ArgOption::add uses optarg
                d_shortoption.add(c);
            break;
        }
    }
    remainingArgs(optind, argc, argv);
}
