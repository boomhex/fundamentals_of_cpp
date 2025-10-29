#include "arg.ih"

void Arg::addShort(int ch, int optopt)
{
    switch (ch)
    {
        case ':': // required argument
        case '?': // unknown option
            if (optopt != 0)
                d_shortoption.add(static_cast<unsigned char>(optopt));
        break;

        default:
            d_shortoption.add(ch);
        break;
    }
}