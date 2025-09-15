#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

int main(int argc, char* argv[])
{
    for (string line; getline(cin, line);)  // loop through lines input stream
    {
        
        size_t currentIndex = line.size();
        size_t j = currentIndex - 1;
        for (auto from = line.crbegin(), to = line.crend(); from != to; ++from)
        {
            if ((*from & 0x80) == 0x00)
            {
                cout << *from;
                currentIndex = j;
                j = j - 1;
            } 
            else if ((*from & 0xC0) == 0x80)
            {
                j--;
            }
            else
            {
                cout << line.substr(j, currentIndex - j);
                currentIndex = j;
                j--;
            }
        }
        cout << '\n';
    }
}
