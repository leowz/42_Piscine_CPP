#include "Peon.hpp"

Peon::Peon(void): Victim("")
{
}

Peon::Peon(const std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &obj): Victim(obj.name())
{
}

Peon    &Peon::operator=(const Peon &obj)
{
    this->_name = obj.name();
    return (*this);
}

void    Peon::getPolymorphed(void) const
{
    std::cout << this->name() << " has been turned into a pink pony !" <<
        std::endl;
}

std::ostream    &operator<<(std::ostream &os, const Peon &obj)
{
    os << "I'm " << obj.name() << " and i like otters !" << std::endl;
    return (os);
}
