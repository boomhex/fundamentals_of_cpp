#include "calculator.h"

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
    case '%':
        ans = static_cast<long long>(d_number1) % static_cast<long long>(d_number2);
    break;
    default:
    break;
    }
    cout << ans << '\n';
}

