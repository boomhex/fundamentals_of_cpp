#include "main.ih"
#include <iostream>

using namespace std;                        // allows to omit std::

int main(int argc, char *argv[])
{
    // check if input is valid
    if (argc != 2 ||
        argv[1][0] != '-' ||
        argv[1][1] == '\0' ||
        argv[1][2] != '\0')
    {
        return 0;
    }
    switch (argv[1][1])                 // check second character
    {
    case 'c':                           // count chars
        cout << countChars() << '\n';
    break;

    case 'w':                           // count words
        cout << countWords() << '\n';
    break;

    case 'l':                           // count lines
        cout << countLines() << '\n';
    break;
    
    default:
        return 0;
    }
}

