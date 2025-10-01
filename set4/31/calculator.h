#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Calculator
{
    public:
        void run();                 // run.cc; only public member

    private:
        // the type istringstream is used to hold and parse the input
        istringstream d_line;
        double d_number1;           // all data members
        double d_number2;
        char d_operator;
        bool d_num1Int;
        bool d_num2Int;

        bool expression();                      // expression.cc
        bool number(double *dest, bool *isInt); // number.cc
        bool getOperator();                     // getoperator.cc
        void evaluate();                        // evaluate.cc

        bool isZero(double value);              // iszero.cc
};
#endif