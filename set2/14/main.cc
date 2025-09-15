#include <iostream>
#include <string>

using namespace std;                                // Allows to omit std::

int main(int argc, char* argv[])
{
    double input;
    cout << "Enter a value to compute the sqrt of (<= 0 to stop): ";
    cin >> input;
    if (input <= 0){
        return 0;
    }
    double x0 = 1;
    double x1 = x0 + (input - (x0*x0)) / (2*x0);;
    
    for (size_t i = 1; x0 != x1; i++)
    {
        cout << i << ": x0: " << x0 << ", x1 = "<< x1 << ", sqr is: "<< x1*x1 << '\n';
        x0 = x1;
        x1 = x0 + (input - (x0*x0)) / (2*x0);
       
        
    }
    
    cout << "sqrt("<< input << ") is " << x0 << '\n';
    
}
