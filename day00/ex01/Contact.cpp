#include "Contact.hpp"

void    Contact::setField(int index, const std::string str)
{
    if (index == 0)
        this->_firstName = str;
    else if (index == 1)
        this->_lastName = str;
    else if (index == 2)
        this->_nickname = str;
    else if (index == 3)
        this->_postalAddress = str;
    else if (index == 4)
        this->_email = str;
    else if (index == 5)
        this->_phone = str;
    else if (index == 6)
        this->_birthday = str;
    else if (index == 7)
        this->_favoriteMeal = str;
    else if (index == 9)
        this->_underwearColor = str;
    else
        this->_darkestSecret = str;
}

std::string Contact::getField(int index)
{
    if (index == 0)
        return (this->_firstName);
    else if (index == 1)
        return (this->_lastName);
    else if (index == 2)
        return (this->_nickname);
    else if (index == 3)
        return (this->_postalAddress);
    else if (index == 4)
        return (this->_email);
    else if (index == 5)
        return (this->_phone);
    else if (index == 6)
        return (this->_birthday);
    else if (index == 7)
        return (this->_favoriteMeal);
    else if (index == 8)
        return (this->_underwearColor);
    else
        return (this->_darkestSecret);
}
