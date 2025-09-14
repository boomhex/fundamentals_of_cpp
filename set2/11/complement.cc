#include <iostream>
#include <string>

using namespace std;                    // Allows to omit std::

int main(int argc, char* argv[])
{
    int in;
    in = stoll(argv[1]);                // Use stoll to accept long long ints.
    // convert to unsigned to prevent weird behavior in shifting.
    unsigned int uin = static_cast<unsigned int>(in);

    string bitString;
    string summation;
    bool first = true;

    int nBits = sizeof(uin) * 8;
    for (int bit = nBits - 1; bit != 0; --bit)  // Check for all bits whether
    {                                           // 1 or 0 and add to bitString
        if (uin & (1ULL << (bit - 1)))
        {
            bitString += '1';

            if (!first) summation += " + ";     // only put summation sign
            first = false;                      // when not first 1 bit.
            if (bit == nBits - 1){              // Check for sign bit.
                summation += to_string(-(1LL << bit));
            }
            else 
            {
                summation += to_string(1LL << bit);
            }
        }
        else
        {
            bitString += '0';
        }
    }

    // print to output stream
    cout << in << " = " << bitString << " = " << summation << "\n";
}
