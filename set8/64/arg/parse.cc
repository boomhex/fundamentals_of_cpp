#include "arg.ih"

void Arg::parse(char const *optstring, LongOption const *const begin,
            LongOption const *const end, int argc, char **argv)
{
    OptStruct *longOpts{};
    longOpts = parseOpts(begin, end);

    int longidx;
    longidx = -1;
    int c;
    while ((c = getopt_long(argc, argv, optstring, longOpts, &longidx)) != -1)
    {
        if (c == 0)
        { // long-only option (no short synonym)
            if (longOpts and longidx >= 0)
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

    delete[] longOpts;
}
