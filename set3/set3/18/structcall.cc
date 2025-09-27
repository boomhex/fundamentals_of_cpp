#include "main.ih"
#include <iostream>

bool structCall(size_t argc, char **argv)
{
    ReturnValues result = combine(argc, argv);

    if (not result.ok)
    {
        cout << "Usage: " << argv[0] << " arg_nr arg1 arg2 ..\n";
        return false;
    }

    printResult(result);
    return true;
}
