#include "Pony.hpp"

Pony::Pony(std::string name, std::string gender, int age):_name(name), _gender(gender), _age(age)
{
}

std::string    Pony::name(void)
{
    return (this->_name);
}

std::string    Pony::gender(void)
{
    return (this->_gender);
}

int    Pony::age(void)
{
    return (this->_age);
}

void    Pony::ponyRun(void)
{
    if (this->gender() == "female")
        std::cout << this->name() << " is running at 5 km/hour" << std::endl;
    else
        std::cout << this->name() << " is running at 15 km/hour" << std::endl;
}

void    Pony::ponyCry(void)
{
    if (this->gender() == "female")
        std::cout << this->name() << ": ho ho ho!" << std::endl;
    else
        std::cout << this->name() << ": ha ha ha!" << std::endl;
}
