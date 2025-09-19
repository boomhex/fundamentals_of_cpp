#include "main.ih"
#include <iostream>
#include <string>

using namespace std;

size_t countWords()
{
    size_t count = 0;
    string word;
    while (cin >> word)         // read each word
        ++count;
    return count;
}