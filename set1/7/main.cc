#include <iostream>
#include <string>
                                        // Use namespace std so I don't have
using namespace std;                    // to type it and avoid long lines.

int main(int argc, char* argv[])
{
    cout << "hello "                    // statement should print hello first
         << (argc == 1 ? "world"        // no arguments, so print world
             : (argc == 2 ? argv[1]     // 1 argument, should print first arg
             : argv[stoul(argv[1])]))   // >1, should print the specified index
         << "\n";                       // newline char for neatness of output.
}
