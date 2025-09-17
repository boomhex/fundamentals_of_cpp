#include <iostream>

using namespace std;					// omit std::

int main(int argc, char *argv[])
{
    ++argv;								// skip program name
    --argc;								// decrement to skip program name
    size_t nElements = argc;		    // elements are equal to extra args
    size_t totalCombinations = 1 << nElements;	// get amount of combinations

    for (size_t nthCombination = 0;
         nthCombination != totalCombinations;
         ++nthCombination)
    {
        cout << (nthCombination + 1)<< ": ";
        for (size_t idx = 0; idx != nElements; ++idx)
        {
            if (nthCombination & (1 << idx)) // use bit repr to check if
                cout << argv[idx] << " ";    // arg has to be printed.
        }
        cout << "\n";
    }
}