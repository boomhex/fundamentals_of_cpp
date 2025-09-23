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
        if (tolower(arr[left]) <= pivot)
        {
            swap(arr[pivotIndex], arr[left]);
            pivotIndex = left;
            ++left;
        } 
        else
        {
            swap(arr[left], arr[--right]);
        }
    }
    return pivotIndex;
}