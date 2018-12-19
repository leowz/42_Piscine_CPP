#include "Weapon.hpp"

Weapon::Weapon(std::string str): _type(str)
{
}

const std::string   &Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}
