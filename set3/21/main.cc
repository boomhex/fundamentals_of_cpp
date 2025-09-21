#include "main.ih"
#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

extern char **environ;

int main()
{
    size_t size = 0;
    for (char **env = environ; *env != nullptr; ++env)
        ++size;

    // copy into array of std::string
    string *arr = new string[size];
    size_t idx = 0;
    for (char **env = environ; *env != nullptr; ++env)
        arr[idx++] = *env;

    quicksort(arr, 0, size);

    for (size_t i = 0; i < size; ++i)
        cout << arr[i] << '\n';

    delete[] arr;   // cleanup
}
