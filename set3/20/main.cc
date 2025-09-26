#include "main.ih"


using namespace std;                        // allows to omit std::

int main(int const argc, char const *argv[])
{
    // check if input is valid
    char input = checkInput(argc, argv);

    switch (input)                 // check second character
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
    return 1;                           // input invalid
    }
}

