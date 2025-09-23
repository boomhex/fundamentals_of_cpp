#include "main.ih"
#include <iostream>

void boundCall(int argc, char **argv)
{
    // check argument validity.
    if (ReturnValues result = combine(argc, argv); result.ok)
        printResult(result);
}