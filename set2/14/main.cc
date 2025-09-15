#include <iostream>
#include <string>

using namespace std;                                // Allows to omit std::

int main(int argc, char* argv[])
{
    double input;
    cout << "Enter a value to compute the sqrt of (<= 0 to stop): ";
    cin >> input;                                   // get input
    if (input <= 0){                                // stop with non-positive
        return 0;
    }
    double x0 = 1;                                  // start value x0
    double x1 = x0 + (input - (x0*x0)) / (2*x0);    // calulate first x1
    
    for (size_t i = 1; x0 != x1; i++)               // loop until x0 == x1
    {
        cout << i                                   // print steps
             << ": x0: " 
             << x0 << ", x1 = "
             << x1 << ", sqr is: "
             << x1*x1 
             << '\n';
        x0 = x1;
        x1 = x0 + (input - (x0*x0)) / (2*x0);       // calculate new x1
       
        
    }
    
    cout << "sqrt("                                 // print output
         << input 
         << ") is " 
         << x0 
         << '\n';
    
}
