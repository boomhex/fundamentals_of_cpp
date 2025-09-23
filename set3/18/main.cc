#include "main.ih"

using namespace std;    // omit std::

int main(int argc, char **argv)
{
    if (structCall(argc, argv))
        boundCall(argc, argv);
}
