#include "main.ih"

bool allFlag(size_t argc, char **argv)
{
    if (argc > 1)
    {
        string argument{ argv[1] };
        if (argument == "-a")
            return true;
    }
    return false;
}
