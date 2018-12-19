#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    this->_type = "default";
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, this->_type));
}

void    ZombieEvent::randomChump(void)
{
    int     index;
    std::string names[] = {"Angel", "Eugenio", "Gerardo", "Giacomo", "Ignacio"};

    index = rand() % 5;
    Zombie  tmp = Zombie(names[index], "male");
    tmp.announce();
}
