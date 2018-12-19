#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
    std::string _type;

public:
    ZombieEvent(void);
    void    setZombieType(std::string type);
    Zombie  *newZombie(std::string name);
    void    randomChump(void);
};

#endif
