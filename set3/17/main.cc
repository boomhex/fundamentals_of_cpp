#include <iostream>
#include <string>
#include "sum.h"

using namespace std;                        // allows to omit std::

int main(int argc, char *argv[])
{
    size_t hasDot = false;
    for (int idx = 1; idx < argc; ++idx)
    {
        string arg = argv[idx];
        if (arg.find('.') != string::npos) 
        {
            hasDot = true;
            break;
        }
    }
    if (hasDot)
    {
        cout << sum(argc, argv, 0.0) << '\n';
    }
    else
    {
        cout << sum(argc, argv, 0) << '\n';
    }
}
