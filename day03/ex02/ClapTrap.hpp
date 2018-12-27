#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ClapTrap
{
protected:
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

    ClapTrap(void);
    ClapTrap(const std::string &name);
    ~ClapTrap(void);
    ClapTrap(const ClapTrap &obj);

    ClapTrap        &operator=(const ClapTrap &obj);
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    
    std::string     getName(void);
    unsigned int    getMeleeAttackDamage(void);
    unsigned int    getRangedAttackDamage(void);
    unsigned int    getArmorDamageReduction(void);
};

#endif
