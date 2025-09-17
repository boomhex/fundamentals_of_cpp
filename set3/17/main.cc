#include <iostream>
#include <string>

using namespace std;                        // allows to omit std::

int sum(int argc, char *argv[], int)
{
    int total = 0;
    for (int idx = 1; idx < argc; idx++)
    {
        total += stoi(argv[idx]);
    }
    return total;
}

double sum(int argc, char *argv[], double)
{
    double total = 0.0;
    for (int idx = 1; idx < argc; ++idx)
    {
        total += stod(argv[idx]);
    }
    return total;
}

int main(int argc, char *argv[])
{
    size_t hasDot = false;
    for (int idx = 1; idx < argc; ++idx)
    {
        string arg = argv[idx];
        if (arg.find('.') != string::npos) 
        {
            hasDot = true;
            break;
        }
    }
    if (hasDot)
    {
        cout << sum(argc, argv, 0.0) << '\n';
    }
    else
    {
        cout << sum(argc, argv, 0) << '\n';
    }
}
