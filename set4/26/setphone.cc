#include "person.ih"

void Person::setPhone(string const &phone)
{
    if (phone.empty())      // if phone input is empty
        d_phone = " - not available -";
    else if (hasOnly("0123456789", phone))  // check if it only has numbers
        d_phone = phone;
    else
        cout << "A phone number may only contain digits\n";
}