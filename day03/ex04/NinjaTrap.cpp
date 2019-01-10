/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:17:22 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:17:23 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
    this->_name = "";
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    std::cout << "NJ4G-TP created" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "NJ4G-TP " << this->_name << " Destroyed" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string &name)
{
    this->_name = name;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    std::cout << "NJ4G-TP " << name << " created" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj)
{
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_maxHitPoints = obj._maxHitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_maxEnergyPoints = obj._maxEnergyPoints;
    this->_level = obj._level;
    this->_meleeAttackDamage = obj._meleeAttackDamage;
    this->_rangedAttackDamage = obj._rangedAttackDamage;
    this->_armorDamageReduction = obj._armorDamageReduction;
}

NinjaTrap    &NinjaTrap::operator=(const NinjaTrap &obj)
{
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_maxHitPoints = obj._maxHitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_maxEnergyPoints = obj._maxEnergyPoints;
    this->_level = obj._level;
    this->_meleeAttackDamage = obj._meleeAttackDamage;
    this->_rangedAttackDamage = obj._rangedAttackDamage;
    this->_armorDamageReduction = obj._armorDamageReduction;
    return (*this);
}

void        NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << "NJ4G-TP " << this->_name << " attacks " << target << " at range, causing "
        << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void        NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << "NJ4G-TP " << this->_name << " did a melee attack at " << target << " , causing "
        << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void            NinjaTrap::ninjaShoebox(const ClapTrap &obj)
{
    std::cout << "NJ4G-TP " << this->_name << " throws a shoe at ClapTrap " <<
        obj.getName() << " causing tons of damage!" << std::endl;
}

void            NinjaTrap::ninjaShoebox(const FragTrap &obj)
{
    std::cout << "NJ4G-TP " << this->_name << " throws a shoe at FragTrap " <<
        obj.getName() << " causing tons of damage!" << std::endl;
}

void            NinjaTrap::ninjaShoebox(const ScavTrap &obj)
{
    std::cout << "NJ4G-TP " << this->_name << " throws a shoe at ScavTrap " <<
        obj.getName() << " causing tons of damage!" << std::endl;
}

void            NinjaTrap::ninjaShoebox(const NinjaTrap &obj)
{
    std::cout << "NJ4G-TP " << this->_name << " throws a shoe at NinjaTrap " <<
        obj.getName() << " causing tons of damage!" << std::endl;
}
