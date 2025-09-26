#include "main.ih"

using namespace std;

int main(int const argc, char const *argv[])
{
    Arguments args = parseArgs(argc, argv);
    if (!args.ok)                       // invalid args
        return 1;

    mt19937 rng(args.seed);             // make random number generator
    // make uniform distribution(dist) from 0 to population
    uniform_int_distribution<size_t> brownDist(0, args.population);
    size_t numberOfBrown = brownDist(rng);  // get random number form dist

    size_t people[args.population];         
    makePeople(people, args.population);    // makes all people numbered
    
    printOutput(args, numberOfBrown, people);
}
