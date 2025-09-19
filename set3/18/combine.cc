#include "main.ih"
#include <iostream>

using namespace std;

ReturnValues combine(int argc, char** argv)
{
    ReturnValues result;    // initialized in header

    if (argc < 2)
        return result;  // no requested argument

    int argRequested = stoul(argv[1]);   // prevent off-by-one error

    if (argRequested < argc)
    {
        result.ok = true;
        result.nr = argRequested;
        result.value = argv[argRequested - 1];
    }

    return result;
}