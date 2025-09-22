#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <cstdlib>   // strtoul

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 3)
        srandom(strtoul(argv[2], nullptr, 10));
    else
        srandom(time(nullptr));

    size_t population = strtoul(argv[1], nullptr, 10);

    size_t numberOfBrown = random() % (population + 1);
    cout << "the number of brown eyes: " << numberOfBrown << '\n';

    size_t people[population] = {};
    for (size_t idx = 0; idx < population; ++idx)
        people[idx] = idx + 1;
    

    size_t count = 1;
    while (population != 0)
    {
        size_t rand = random() % population;
        cout << count << ": "
             << (count <= numberOfBrown ? "brown (" : "blue (")
             << people[rand] << ")\n";
        people[rand] = people[population-1];
        --population;
        ++count;
    }
}
