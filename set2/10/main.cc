#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

int main(int argc, char* argv[])
{
    string line;
    getline(cin, line, '\n');
    for (; isblank(line.front());){
        line.erase(0, 1);
    }
    for (; isblank(line.back());){
        line.pop_back();
    }
    cout << '`' << line << "'\n";
}
