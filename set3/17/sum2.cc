#include <string>
using namespace std;

double sum(int argc, char *argv[], double)   // 2.cc
{
    double total = 0.0;
    for (size_t idx = 1; idx < argc; ++idx)
    {
        total += stod(argv[idx]);
    }
    return total;
}