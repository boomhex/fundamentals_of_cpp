#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Calculator
{
    public:
        void run();

    private:
        istringstream d_line;
        double d_number1;
        double d_number2;
        char d_operator;
        bool d_num1Int;
        bool d_num2Int;

        bool expression();
        bool number(double *dest, bool *isInt); 
        bool getOperator();
        void evaluate();

        bool isZero(double value);
};
#endif