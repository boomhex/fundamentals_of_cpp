#include <iostream>
#include <string>

using namespace std;                        // Allows to omit std::

int main(int argc, char* argv[])
{
    string line;                            // initialize string
    getline(cin, line, '\n');               // get input
    for (; isblank(line.front());)          // loop until no blank in front
    {
        line.erase(0, 1);                   // erase first char in string
    }
    for (; isblank(line.back());)           // loop until no blank in the back
    {
        line.pop_back();                    // remove last char in string
    }
    cout << '`' << line << "'\n";           // print output to output stream
}
