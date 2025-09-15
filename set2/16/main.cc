#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

int main(int argc, char* argv[])
{
    for (string line; getline(cin, line);)  // loop through lines input stream
    {
        
        size_t currentIndex = line.size();  // start index
        size_t j = currentIndex - 1;        // size of character
        // loop through all character from end to start
        for (auto from = line.crbegin(), to = line.crend(); 
            from != to; ++from)
        {
            if ((*from & 0x80) == 0x00)     // single byte
            {
                cout << *from;              // print char
                currentIndex = j;
                j = j - 1;
            } 
            else if ((*from & 0xC0) == 0x80)// multi-char code point
            {  
                j--;                         
            }
            else
            {
                // print all bytes for current character
                cout << line.substr(j, currentIndex - j);
                currentIndex = j;
                j--;
            }
        }
        cout << '\n';
    }
}
