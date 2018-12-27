#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
public:

    NinjaTrap(void);
    NinjaTrap(const std::string &name);
    ~NinjaTrap(void);
    NinjaTrap(const NinjaTrap &obj);

    NinjaTrap       &operator=(const NinjaTrap &obj);
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);

    void            ninjaShoebox(const ClapTrap &obj);
    void            ninjaShoebox(const FragTrap &obj);
    void            ninjaShoebox(const ScavTrap &obj);
    void            ninjaShoebox(const NinjaTrap &obj);
};

#endif
