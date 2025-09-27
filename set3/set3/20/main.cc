#include "main.ih"


using namespace std;                        // allows to omit std::

int main(int const argc, char const *argv[])
{
    // check if input is valid
    char input = checkInput(argc, argv);
    size_t ans;

    switch (input)                 // check second character
    {
    case 'c':                           // count chars
        ans = countChars();
    break;
    case 'w':                           // count words
        ans = countWords();
    break;
    case 'l':                           // count lines
        ans = countLines();
    break;
    default:
    return 1;                           // input invalid
    }
    cout << ans << '\n';
}

