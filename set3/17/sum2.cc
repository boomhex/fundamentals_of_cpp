#include <string>
using namespace std;

double sum(int const argc, char const *argv[], double)      // sum2.cc
{
    double total = 0.0;
    for (int idx = 1; idx != argc; ++idx)       // for all arguments
    {
        total += stod(argv[idx]);               // read argv as double and add
    }
    return total;                               // return result
}