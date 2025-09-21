#include "main.ih"
#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

void quicksort(string arr[], size_t left, size_t right)
{
    if (left != right)
    {
        size_t pivotIndex = partition(arr, left, right);
        quicksort(arr, left, pivotIndex);
        quicksort(arr, pivotIndex + 1, right);
        
    }
}