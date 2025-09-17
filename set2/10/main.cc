#include <iostream>
#include <string>

using namespace std;                                // Allows to omit std::

int main()
{
    string line;                                    // initialize string
    getline(cin, line, '\n');                       // get input
    cout << '`'                                     // print output
         << line.substr(line.find_first_not_of(" \t"), 
            line.find_last_not_of(" \t") - 
            line.find_first_not_of(" \t") + 1) 
         << "'\n";
}
