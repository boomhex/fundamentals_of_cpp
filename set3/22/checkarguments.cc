#include "main.ih"

using namespace std;

Arguments parseArgs(int const argc, char const *argv[])
{
    Arguments args;
    if (argc < 2)                      // need at least population size
        return args;

    args.population = stoul(argv[1]);     // get population size

    if (argc == 3)                     // optional seed
        args.seed = stoul(argv[2]);
    else                               // get seed from random device
    {
        random_device rd;
        args.seed = rd();
    }

    args.ok = (args.population > 0);      // check if the arguments are ok
    return args;
}