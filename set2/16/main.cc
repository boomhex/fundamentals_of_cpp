#include <iostream>
#include <string>

using namespace std;

int main() {
    for (string line; getline(cin, line); )                 // get input
    {
        size_t currentIndex = line.size();                  // start index
        for (size_t j = line.size(); j > 0; j--)            // loop chars
        {         
            // check if it is not a continuation byte
            if ((line[j] & 0xC0) != 0x80)                   
            {
                cout << line.substr(j, currentIndex - j);   // print UTF-8   
                currentIndex = j;
            }
        }
        cout << '\n';
    }
}