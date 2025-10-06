#ifndef PARSER_H_
#define PARSER_H_

#include "../28/line.h"
#include <string>

class Parser
{
    Line d_line;
    bool d_integral = 0;

    public:
        enum Return 
        {
            NO_NUMBER,
            NUMBER,
            EOLN
        };

        bool reset();
        Return number(double *dest);
        bool isIntegral() const;
        std::string next();

    private:
        Return convert(double *dest, std::string const &str);
        bool pureDouble(double *dest, std::string const &str);
};

#endif