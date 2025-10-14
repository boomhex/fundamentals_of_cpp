#include <iostream>
#include <cstdlib>   // std::atoll

using namespace std;

int main(int argc, char** argv) {
    long long n = atoll(argv[1]);  // assume valid input
    ostream out(cout.rdbuf());          // uses cout's buffer
    out.setstate(ios::failbit);         // disable output
    for (long long i = 0; i < n; ++i) {
        if (out.good())                 // comment this line to compare
            out << "Nr. of command line arguments " << argc << '\n';
    }
}