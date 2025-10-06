#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <sstream>

using namespace std;

class Calculator
{
    // the type istringstream is used to hold and parse the input
    istringstream d_line;
    double d_number1;           // all data members
    double d_number2;
    char d_operator;
    bool d_num1Int;
    bool d_num2Int;
    public:
        void run();                 // run.cc; only public member

    private:
        bool expression();                      // expression.cc
        bool number(double *dest, bool *isInt); // number.cc
        bool getOperator();                     // getoperator.cc
        void evaluate();                        // evaluate.cc

        bool hasOnly(char const *characters, string const &object);
        bool isZero(double value);              // iszero.cc
};
#endif