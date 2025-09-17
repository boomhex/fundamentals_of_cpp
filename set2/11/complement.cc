#include <iostream>
#include <string>

using namespace std;                                // Allows to omit std::

int main(int argc, char *argv[])
{
    int in = 0;
    in = stoi(argv[1]);                             // stoi for str to int

    // convert to unsigned prevents weird behavior in shifting
    // separate in for later use.
    unsigned int uin = static_cast<unsigned int>(in);

    string bitString, summation;
    bool first = true;

    int nBits = sizeof(uin) * 8;
    for (int bit = nBits - 1; bit >= 0; --bit)    // check for all bits whether
    {                                             // 1 or 0 and add to bitString
        bool bitSet = (uin & (1 << bit));         // check if bit is set
        bitString += bitSet ? '1' : '0';          // number to bitstring if set

        if (bitSet){                              // add summation if bit set
            if (!first)                            // add summation non-first
                summation += " + ";
            if (bit == nBits - 1)                 // add neg if sign bit is set
                summation += '-';
            first = false;                         // set to false when bit set
            summation += to_string((1LL << bit)); // add 2^nth bit to summation
        }
    }

    // print to output stream, 0 when input was 0. Summation will be empty
    cout << in << " = " << bitString <<
    " = " << ((summation.length()) ? summation : "0") << "\n";
}
