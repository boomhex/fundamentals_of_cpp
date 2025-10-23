#include "numbers.ih"

Numbers &Numbers::operator=(Numbers const &other)
{
    Numbers tmp{ other };   // Copy?s
    return *this = std::move(tmp);
}
