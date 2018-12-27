#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:

    ScavTrap(void);
    ScavTrap(const std::string &name);
    ~ScavTrap(void);
    ScavTrap(const ScavTrap &obj);

    ScavTrap        &operator=(const ScavTrap &obj);
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);
    void            challengeNewcomer(void);
};

#endif
