#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    unsigned int    _crucialAttackDamage;
    unsigned int    _trollAttackDamage;
    unsigned int    _normalAttackDamage;
    unsigned int    _missedAttackDamage;
    unsigned int    _vaulthunterAttackDamage;
    unsigned int    _jokeAttackDamage;
    unsigned int    _armorDamageReduction;

public:

    FragTrap(void);
    FragTrap(const std::string &name);
    ~FragTrap(void);
    FragTrap(const FragTrap &obj);

    FragTrap        &operator=(const FragTrap &obj);
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);

    void            vaulthunter_dot_exe(std::string const &target);
    void            crucialAttack(std::string const &target);
    void            trollAttack(std::string const &target);
    void            normalAttack(std::string const &target);
    void            missedAttack(std::string const &target);
    void            jokeAttack(std::string const &target);
    
    unsigned int    getVaulthunterAttackDamage(void);
    unsigned int    getCrucialAttackDamage(void);
    unsigned int    getTrollAttackDamage(void);
    unsigned int    getNormalAttackDamage(void);
    unsigned int    getMissedAttackDamage(void);
    unsigned int    getJokeAttackDamage(void);
};

#endif
