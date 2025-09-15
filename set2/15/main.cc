#include <iostream>

using namespace std;					// omit std::

int main(int argc, char* argv[])
{
	++argv;								// skip program name
	--argc;								// decrement to skip program name
	int nElements = argc;				// elements are equal to extra args now
	int totalCombinations = 1 << nElements;	// 2^elements to get amount of comb

	for (int nthCombination = 0;
		 nthCombination < totalCombinations;
		 ++nthCombination)
	{
		cout << nthCombination << ": ";
		for (int idx = 0; idx != nElements; ++idx)
		{
			if (nthCombination & (1 << idx)) // Use bit repr to see if the arg
			{								 // has to be printed.
				cout << argv[idx] << " ";
			}
		}
		cout << "\n";
	}
}