#include <iostream>
#include <string>

using namespace std;                                // Allows to omit std::

int main(int argc, char* argv[])
{
    string input = argv[1];                         // initialize input
    size_t sum = 0;
    
    for (auto &digit: input)                        // loop through string
    {
        sum += digit - '0';                         // add char as number
    }
    for (; sum >= 10;)                              // loop until sum is < 10
    {
        size_t next = 0;                            // tmp value
        for (; sum > 0;)                            // loop through all digits
        {
            next += sum % 10;                       // add the last digit
            sum /= 10;                              // remove last digit
        }
        sum = next;
    }
    cout << ((sum == 3 || sum == 6 || sum == 9)     // print the output
            ? "divisible by 3\n"
            : "not divisible by 3\n");
}
