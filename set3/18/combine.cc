#include "main.ih"
#include <iostream>

ReturnValues combine(size_t argc, char** argv)
{
    ReturnValues result;    // initialized in header

    if (argc < 2)
        return result;  // no requested argument

    int argRequested = stoul(argv[1]);

    if (argRequested < argc)    // valid requested arg
    {
        result.ok = true;
        result.nr = argRequested;
        result.value = argv[argRequested - 1];
    }

    return result;
}
