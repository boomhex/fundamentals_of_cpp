#include "main.ih"
#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

size_t partition(string *arr, size_t left, size_t right)
{
    string const pivot = tolower(arr[left]);
    size_t pivotIndex = left;
    ++left;
    while (left != right)
    {
        if (tolower(arr[left]) > pivot)
        {
            --right;
            string tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
        else
        {
            string tmp = arr[pivotIndex];
            arr[pivotIndex] = arr[left];
            arr[left] = tmp;
            pivotIndex = left;
            ++left;
        }
    }
    return pivotIndex;
}