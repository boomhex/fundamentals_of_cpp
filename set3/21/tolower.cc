#include "main.ih"
#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

string tolower(string const &str)
{
    string res = str;
    for (unsigned char ch : str)
        res.push_back(tolower(ch));
    return res;
}