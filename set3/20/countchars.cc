#include "main.ih"
#include <iostream>

using namespace std;

size_t countChars()
{
    size_t count = 0;
    char ch;
    while (cin.get(ch))   // counts every byte
        ++count;
    return count;
}