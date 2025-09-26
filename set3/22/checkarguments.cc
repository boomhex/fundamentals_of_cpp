#include "main.ih"

using namespace std;

Arguments parseArgs(int const argc, char const *argv[])
{
    Arguments args;
    if (argc < 2)                      // need at least population size
        return args;

    args.population = stoul(argv[1]);     // may throw; assume valid per exercise

    if (argc == 3)                     // optional deterministic seed
        args.seed = stoul(argv[2]);
    else                               // nondeterministic seed
    {
        random_device rd;
        args.seed = rd();
    }

    args.ok = (args.population > 0);
    return args;
}