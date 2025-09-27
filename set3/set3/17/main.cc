#include <iostream>
#include <string>
#include "sum.ih"

using namespace std;                            // allows to omit std::

int main(int const argc, char const *argv[])
{
    bool hasDot = false;                  
    for (int idx = 1; idx != argc; ++idx)     // loop through arguments
    {
        string arg = argv[idx];
        if (arg.find('.') != string::npos)      // if it has a .
        {
            hasDot = true;
            break;
        }
    }
    if (hasDot)                                 // if it has a . use double
        cout << sum(argc, argv, 0.0) << '\n';
    else                                        // else use int
        cout << sum(argc, argv, 0) << '\n';
}
