#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ScavTrap
{
    unsigned int    _hitPoints;
    unsigned int    _maxHitPoints;
    unsigned int    _energyPoints;
    unsigned int    _maxEnergyPoints;
    unsigned int    _level;
    std::string     _name;
    unsigned int    _meleeAttackDamage;
    unsigned int    _rangedAttackDamage;
    unsigned int    _armorDamageReduction;

public:

    ScavTrap(void);
    ScavTrap(const std::string &name);
    ~ScavTrap(void);
    ScavTrap(const ScavTrap &obj);

    ScavTrap        &operator=(const ScavTrap &obj);
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            challengeNewcomer(void);
    
    std::string     getName(void);
    unsigned int    getMeleeAttackDamage(void);
    unsigned int    getRangedAttackDamage(void);
    unsigned int    getArmorDamageReduction(void);
};

#endif
