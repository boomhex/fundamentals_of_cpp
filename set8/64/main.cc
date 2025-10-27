#include "main.ih"
#include <string>

namespace
{
    Arg::LongOption longOptions[] = 
    {
        Arg::LongOption{"debug"},
        Arg::LongOption{"filenames", 'f'},
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"version", 'v'},
    };
    auto longEnd = longOptions + std::size(longOptions);
}

int main(int argc, char **argv)
{
    Arg &arg = Arg::initialize("df:hv", 
                    longOptions, longEnd, argc, argv);
    std::cout << arg.basename() << '\n';
}
