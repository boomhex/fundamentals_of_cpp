#include "main.ih"
#include <iostream>

using namespace std;

void printResult(ReturnValues const &result)
{
    cout << "nr: " << result.nr << " value : " << result.value << '\n';
}
