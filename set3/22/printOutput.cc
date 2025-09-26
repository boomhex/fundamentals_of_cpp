#include "main.ih"

using namespace std;

void printOutput(Arguments &args, size_t numberOfBrown, size_t people[])
{
    mt19937 rng(args.seed);     // make random number generator
    // keep track of number of people on the island
    size_t onIsland = args.population;
    for (size_t count = 1; onIsland != 0; ++count) 
    {
        uniform_int_distribution<size_t> pickdist(0, onIsland - 1);
        size_t pick = pickdist(rng);    // index in [0, on island)
        cout << count << ": "
             << (count <= numberOfBrown ? "brown (" : "blue (")
             << people[pick] << ")\n";
        people[pick] = people[onIsland-1];
        --onIsland;
    }
}