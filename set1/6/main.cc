#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    size_t value;
	if(!(cin >> value)) return 0;                                       // Checks if it is a valid number
    cout << (((value % 2) == 1) ? "odd" : "even") << '\n';              // Mod. Calculates the remaider of mod 2, if it is 1 it is odd
    cout << (((value & 1) == 1) ? "odd" : "even") << '\n';              // Bitwise AND. Looks at the least-significant bit(LSB), if it is 1 it is odd
    cout << (((value | 1) == value)? "odd" : "even") << '\n';           // Bitwise OR. With odd the LSB is unchanged, with even it is changed to a 1. If the value is unchanged it is odd.
    cout << ((((value >> 1) << 1) == value) ? "even" : "odd") << '\n';  // Bitshift. Removes LSB and then adds a LSB, if the value didn't change it is even
    cout << (((value - (value / 2) * 2) == 1)? "odd" : "even") << '\n'; // Rounding. Interger division rounds down, so when there is a remainder of 1 it is odd.
    cout << (((value ^ 1) < value) ? "odd" : "even") << '\n';           // Bitwise XOR. It toggles the LSB if the value does down, it is odd
}
