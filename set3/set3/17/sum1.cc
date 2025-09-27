#include <string>
using namespace std;

int sum(int const argc, char const *argv[], int)    // sum1.cc
{
    int total = 0;
    for (int idx = 1; idx < argc; ++idx)        // for all arguments
    {
        total += stoi(argv[idx]);               // read argv as int and add
    }
    return total;                               // return result
}