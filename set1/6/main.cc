#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    size_t value;
	if(!(cin >> value)) return 0;
    cout << (((value % 2) == 1) ? "odd" : "even") << '\n';
    cout << (((value & 1) == 1) ? "odd" : "even") << '\n';
    cout << (((value | 1) == value)? "odd" : "even") << '\n';
    cout << ((((value >> 1) << 1) != value) ? "odd" : "even") << '\n';
    cout << (((value - (value / 2) * 2) == 1)? "odd" : "even") << '\n';
    cout << (((value ^ 1) < value) ? "odd" : "even") << '\n';
}