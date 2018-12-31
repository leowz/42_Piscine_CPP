#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
}

Cure::Cure(const Cure &obj)
{
    *this = obj;
}

Cure::~Cure(void)
{
}

Cure        &Cure::operator=(const Cure &obj)
{
    (void)obj;
    return (*this);
}

AMateria    *Cure::clone(void) const
{
    return (new Cure());
}

void        Cure::use(ICharacter &obj)
{
    AMateria::use(obj);
    std::cout << "* heals " << obj.getName() << "'s wounds *" << std::endl;
}
