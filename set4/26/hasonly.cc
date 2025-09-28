#include "person.ih"

bool Person::hasOnly(char const *characters, string const &object)
{
    // object only contains 'characters'
    return object.find_first_not_of(characters) == string::npos;
}