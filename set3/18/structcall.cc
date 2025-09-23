#include "main.ih"
#include <iostream>

using namespace std;

bool structCall(int argc, char **argv)
{
    ReturnValues result = combine(argc, argv);

    if (!result.ok)
    {
        cout << "Usage: " << argv[0] << " arg_nr arg1 arg2 ..\n";
        return false;
    }

    printResult(result);
    return true;
}
