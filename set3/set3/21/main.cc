#include "main.ih"
#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

extern char **environ;

int main()
{
    size_t size = numberOfEV();

    // copy into array of std::string
    string arr[size];
    getEVArray(arr, size);

    quicksort(arr, 0, size);

    for (size_t count = 0; count != size; ++count)
        cout << arr[count] << '\n';
}
