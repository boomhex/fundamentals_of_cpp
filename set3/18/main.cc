#include "main.ih"

int main(int argc, char **argv)
{
    if (structCall(argc, argv))
        boundCall(argc, argv);  // only call boundCall on valid args
}
