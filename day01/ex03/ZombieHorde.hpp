#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
    Zombie  *_zombs;
    int     _nbr;
public:
    ZombieHorde(int n);
    ~ZombieHorde(void);
    void    announce(void);

};

#endif
