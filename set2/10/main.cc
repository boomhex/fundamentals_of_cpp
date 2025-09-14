#include <iostream>
#include <string>

using namespace std;                                // Allows to omit std::

int main(int argc, char* argv[])
{
    string line;                                    // initialize string
    getline(cin, line, '\n');                       // get input
    size_t start = line.find_first_not_of(" \t");   // find first non blank
    size_t end = line.find_last_not_of(" \t");      // find last non blank
    cout << '`'                                     // print output
         << line.substr(start, end - start + 1) 
         << "'\n";
}
