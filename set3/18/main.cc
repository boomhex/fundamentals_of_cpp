#include "main.ih"
#include <iostream>

using namespace std;    // omit std::

int main(int argc, char **argv)
{
    if (!structCall(argc, argv))    // Ending program if structCall fails
        return 0;

    boundCall(argc, argv);
}