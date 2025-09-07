#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    size_t ip4;                         

    ip4 = 
    ((stoul(argv[1]) << 24)             // bitshift first octet
    | (stoul(argv[2]) << 16)            // bitshift second octet
    | (stoul(argv[3]) << 8)             // bitshift third octet
    | stoul(argv[4]))                   // fourth octet
    & ((stoul(argv[5]) == 0)            // netmask
        ? 0
        : (~0UL << (32 - stoul(argv[5])))); // make mask from input

    cout            // output the whole IP in correct order and format
        << ((ip4 >> 24) & 0xFF) << '.'  
        << ((ip4 >> 16) & 0xFF) << '.'
        << ((ip4 >> 8) & 0xFF) << '.'
        << ((ip4) & 0xFF) << '\n';
}
