#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    size_t ip4;

    ip4 = 
    ((stoul(argv[1]) << 24)
    | (stoul(argv[2]) << 16)
    | (stoul(argv[3]) << 8) 
    | stoul(argv[4]))
    & ((stoul(argv[5]) == 0)
        ? 0
        : (~0UL << (32 - stoul(argv[5]))));

    cout 
        << ((ip4 >> 24) & 0xFF) << '.'
        << ((ip4 >> 16) & 0xFF) << '.'
        << ((ip4 >> 8) & 0xFF) << '.'
        << ((ip4) & 0xFF) << '\n';
}
