#include "main.ih"

using namespace std;

int main(int const argc, char const *argv[])
{
    Arguments args = parseArgs(argc, argv);
    if (!args.ok)                      // invalid args
        return 1;

    mt19937 rng(args.seed);
    uniform_int_distribution<size_t> brownDist(0, args.population);
    size_t numberOfBrown = brownDist(rng);

    cout << "the number of brown eyes: " << numberOfBrown << '\n';

    size_t people[args.population];
    makePeople(people, args.population);
    
    printOutput(args, numberOfBrown, people);
}
