#include "main.ih"

string inputPath(size_t argc, char **argv)
{
    string path;
    path = "/var/log/account/pacct";    // default path

    if (argc > 1)
        path = allFlag(argc, argv) ? argv[2] : argv[1];

    return path;
}
