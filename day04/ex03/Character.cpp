#include "Character.hpp"

Character::Character(void):_name(""), _mcount(0)
{
}

Character::Character(const std::string &name):_name(name), _mcount(0)
{
}

Character::Character(const Character &obj)
{
    *this = obj;
}

Character::~Character(void)
{
}

Character           &Character::operator=(const Character &obj)
{
    int         i;

    i = 0;
    if (this == &obj)
        return (*this);
    this->_name = obj._name;
    while (i < obj._mcount)
    {
      if (i < this->_mcount)
        delete this->_inventory[i];
      this->_inventory[i] = obj._inventory[i]->clone();
      i++;
    }
    return (*this);
}

std::string const   &Character::getName(void) const
{
    return (this->_name);
}

void                Character::equip(AMateria *objPtr)
{
    if (!objPtr || this->_mcount >= 4)
        return ;
    this->_inventory[this->_mcount] = objPtr;
    this->_mcount++;
}

void                Character::unequip(int idx)
{
    if (idx < 0 || idx >= this->_mcount)
        return ;
    if (idx + 1 < this->_mcount)
    {
        while (idx + 1 < this->_mcount)
        {
            this->_inventory[idx] = this->_inventory[idx + 1];
            idx++; 
        }
    }
    this->_mcount--;
}

void                Character::use(int idx, ICharacter &obj)
{
    if (idx < 0 || idx >= this->_mcount)
        return ;
    this->_inventory[idx]->use(obj);
}
