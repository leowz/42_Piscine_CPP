/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:17:08 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:17:09 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap born " << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " Destroyed" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): _name(name)
{
    std::cout << "ClapTrap " << name << " born" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
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

ClapTrap    &ClapTrap::operator=(const ClapTrap &obj)
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

void        ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " at range, causing "
        << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void        ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " did a melee attack at " << target << " , causing "
        << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    damage = amount > this->_armorDamageReduction ?
        amount - this->_armorDamageReduction : 0;
    if (damage > this->_hitPoints)
    {
        this->_hitPoints = 0;
        std::cout << this->_name << " is dead!" << std::endl;
    }
    else
    {
        this->_hitPoints -= damage;
        std::cout << this->_name << " Damage blocked thanks to armor: "
            << this->_armorDamageReduction<< std::endl;
        std::cout << this->_name << " Damage taken: " << damage << std::endl;
        std::cout << this->_name << " HP left: " << this->_hitPoints << std::endl;
    }
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < amount)
    {
        std::cout << this->_name << " not enough energy to repaire" << std::endl; 
    }
    else
    {
        this->_energyPoints -= amount;
        this->_hitPoints += amount;
        std::cout << "Healing " << amount << std::endl;
        std::cout << "HP points: " << this->_hitPoints << std::endl;
    }
}

std::string     ClapTrap::getName(void) const
{
    return (this->_name);
}

unsigned int    ClapTrap::getMeleeAttackDamage(void) const
{
    return (this->_meleeAttackDamage);
}

unsigned int    ClapTrap::getRangedAttackDamage(void) const
{
    return (this->_rangedAttackDamage);
}

unsigned int    ClapTrap::getArmorDamageReduction(void) const
{
    return (this->_armorDamageReduction);
}
