#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

int main()
{
    int aCount = 0, eCount = 0, iCount= 0;  // initialize counters

    string line;                            // initialize a string
    while(getline(cin, line))               // loop through lines input stream
    {
        for (size_t idx = 0; idx != line.size(); idx++)
        {
            switch (tolower(line[idx]))     // lowercase char to find uppercase
            {
                case 'a':                   // increment when char is found
                    ++aCount;
                break;
                case 'e':
                    ++eCount;
                break;
                case 'i':
                    ++iCount;
                break;
            }
        }
    }

    cout << "# a-chars: " << aCount << ", " // print output to output stream
         << "# e-chars: " << eCount << ", "
         << "# i-chars: " << iCount << "\n";
}
