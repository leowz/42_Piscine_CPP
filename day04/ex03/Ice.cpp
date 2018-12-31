#include "Ice.hpp"

Ice::Ice(void):AMateria("ice")
{
}

Ice::Ice(const Ice &obj)
{
    *this = obj;
}

Ice::~Ice(void)
{
}

Ice         &Ice::operator=(const Ice &obj)
{
    (void)obj;
    return (*this);
}

AMateria    *Ice::clone(void) const
{
    return (new Ice());
}

void        Ice::use(ICharacter &obj)
{
    AMateria::use(obj);
    std::cout << "* shoots an ice bolt at " << obj.getName() << " *" << std::endl;
}
