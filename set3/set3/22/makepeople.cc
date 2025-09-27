#include "main.ih"

void makePeople(size_t arr[], size_t n)
{
    for (size_t i = 0; i != n; ++i)      // number all people
        arr[i] = i + 1;
}