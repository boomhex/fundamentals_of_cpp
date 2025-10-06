#include "calculator.ih"
#include <iostream>
#include <cmath>

void Calculator::evaluate()
{
    double ans;
    switch (d_operator)
    {
        case '*':
            ans = d_number1 * d_number2;
        break;
        case '+':
            ans = d_number1 + d_number2;
        break;
        case '-':
            ans = d_number1 - d_number2;
        break;
        case '/':
            ans = d_number1 / d_number2;
        break;
        case '%':       // for module convert double to long long int
            ans = fmod(d_number1, d_number2);
        break;
        default:
        break;
    }
    cout << ans << '\n';    // print answer to output stream
}

