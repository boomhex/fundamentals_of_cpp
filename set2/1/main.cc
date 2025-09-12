#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

int main(int argc, char* argv[])
{
    int aCount = 0;                         // initialize counters
    int eCount = 0;
    int iCount = 0;

    for (string line; getline(cin, line);)  // loop through lines input stream
    {
        for (auto &character: line)
        {
            switch (tolower(character))     // lowercase char to find uppercase
            {
                case 'a':                   // increment when char is found
                    ++aCount;
                case 'e':
                    ++eCount;
                case 'i':
                    ++iCount;
            }
        }
    }

    cout << "# a-chars: " << aCount << ", " // print output to output stream
         << "# e-chars: " << eCount << ", "
         << "# i-chars: " << iCount << "\n";
}
