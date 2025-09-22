#include <iostream>
#include <cstdlib>   // strtoul
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2) 
    {
        return 0;
    }
    if (argc == 3)
        srandom(strtoul(argv[2], nullptr, 10));
    else
        srandom(time(nullptr));

    size_t population = strtoul(argv[1], nullptr, 10);

    size_t const numberOfBrown = random() % (population + 1);
    cout << "the number of brown eyes: " << numberOfBrown << '\n';

    size_t people[population];
    for (size_t idx = 0; idx != population; ++idx)
        people[idx] = idx + 1;
    

    for (size_t count = 1; population != 0; ++count)
    {
        size_t pick = random() % population;
        cout << count << ": "
             << (count <= numberOfBrown ? "brown (" : "blue (")
             << people[pick] << ")\n";
        people[pick] = people[population-1];
        --population;
    }
}
