#include "main.ih"
#include <iostream>
#include <string>

using namespace std;

size_t countLines()
{
    size_t count = 0;
    string line;
    while (getline(cin, line))          // read each line
        ++count;
    return count;
}