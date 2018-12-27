#include "Sorcerer.hpp"


Sorcerer::Sorcerer(void)
{
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title):
    _name(name), _title(title)
{
    std::cout << this->name() << ", " << this->title() << ", is born !" <<
        std::endl;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->name() << ", " << this->title() <<
        ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &obj)
{
    this->_name = obj.name();
    this->_title = obj.title();
}

Sorcerer    &Sorcerer::operator=(const Sorcerer &obj)
{
    this->_name = obj.name();
    this->_title = obj.title();
    return (*this);
}

std::string Sorcerer::name(void) const
{
    return (this->_name);
}

std::string Sorcerer::title(void) const
{
    return (this->_title);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &obj)
{
    os << "I am " << obj.name() << ", " << obj.title()
        << ", and I like ponies !" << std::endl;
    return (os);
}

void        Sorcerer::polymorph(Victim const &obj) const
{
    obj.getPolymorphed();
}
