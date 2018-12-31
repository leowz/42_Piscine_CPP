#include "Squad.hpp"

Squad::Squad(void)
{
    this->_unit_count = 0;
}

Squad::Squad(const Squad &obj)
{
    this->_unit_count = 0;
    *this = obj;
}

Squad::~Squad(void)
{
    int     i;

    i = 0;
    while (i < this->_unit_count)
    {
        delete this->_units[i];
        i++; 
    }
}

Squad           &Squad::operator=(const Squad &obj)
{
    int             i;

    if (this == &obj)
        return (*this);
    i = 0;
    while (i < obj._unit_count)
    {
        if (i < this->_unit_count)
            delete this->_units[i];
        this->_units[i] = obj._units[i]->clone();
        i++;
    }
    this->_unit_count = obj._unit_count;
    return (*this);
}

int             Squad::getCount(void) const
{
    return (this->_unit_count);
}

ISpaceMarine    *Squad::getUnit(int i) const
{
    if (i < 0 || i >= UNIT_SIZE)
        return (NULL);
    return (this->_units[i]);
}

bool            Squad::isAdded(ISpaceMarine *objPtr)
{
    int         i;

    i = 0;
    while (i < this->_unit_count)
    {
        if (this->_units[i] == objPtr)
            return (true);
        i++;
    }
    return (false);
}

int             Squad::push(ISpaceMarine *objPtr)
{
    if (!objPtr || this->getCount() >= UNIT_SIZE || isAdded(objPtr))
        return (this->_unit_count);
    this->_units[this->getCount()] = objPtr;
    this->_unit_count++;
    return (this->getCount());
}
