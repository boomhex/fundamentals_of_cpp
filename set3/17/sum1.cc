#include <string>
using namespace std;

int sum(int argc, char *argv[], int)   // sum1.cc
{
    int total = 0;
    for (int idx = 1; idx < argc; ++idx)
    {
        total += stoi(argv[idx]);
    }
    return total;
}