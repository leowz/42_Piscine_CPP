#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    this->_zombs = new Zombie[n];
    this->_nbr = n;
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_zombs;
}

void    ZombieHorde::announce(void)
{
    int i = 0;

    while (i < this->_nbr)
    {
        this->_zombs[i].announce();
        i++;
    }
}
