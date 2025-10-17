#include "lock/include/lock.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
    if (argc < 2) {     // Ensure usage
        std::cerr << "Usage: " << (argc ? argv[0] : "app") << " <file>\n";
        return 1;
    }

    string const dataPath = argv[1];
    Lock lock(dataPath);        // Acquire lock

    cout << "? ";           // Prompt after lock
    string inp;
    if (not getline(cin, inp))
        return;

    ofstream out(dataPath, ios::app);   // Write after lock
    out << inp << '\n';
}
