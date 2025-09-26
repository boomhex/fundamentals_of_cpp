#include "main.ih"

using namespace std;

void printOutput(Arguments &args, size_t numberOfBrown, size_t people[])
{
    size_t onIsland = args.population;
    for (size_t count = 1; onIsland != 0; ++count)
    {
        size_t pick = random() % onIsland;
        cout << count << ": "
             << (count <= numberOfBrown ? "brown (" : "blue (")
             << people[pick] << ")\n";
        people[pick] = people[onIsland-1];
        --onIsland;
    }
}