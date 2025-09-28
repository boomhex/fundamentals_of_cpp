#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car
{
    string d_model;     // Car model name
    string d_brand;     // Car brand name

    public:     // Member functions.
        void initialize(string const &modelName, string const &brand);
        void setModel(string const &modelName);
        void setBrand(string const &brand);

        string const &model()   const;
        string const &brand()   const;

        void printInfo();
};

#endif
