/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:17:15 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:17:16 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->_name = "";
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_crucialAttackDamage = 9001;
    this->_trollAttackDamage = 5;
    this->_missedAttackDamage = 0;
    this->_normalAttackDamage = 30;
    this->_jokeAttackDamage = 15;
    this->_vaulthunterAttackDamage = 0;
    std::cout << "FR4G-TP created" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FR4G-TP " << this->_name << " Destroyed" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_crucialAttackDamage = 9001;
    this->_trollAttackDamage = 5;
    this->_missedAttackDamage = 0;
    this->_normalAttackDamage = 30;
    this->_jokeAttackDamage = 15;
    this->_vaulthunterAttackDamage = 0;
    std::cout << "FR4G-TP " << name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
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
    this->_crucialAttackDamage = obj._crucialAttackDamage;
    this->_trollAttackDamage = obj._trollAttackDamage;
    this->_missedAttackDamage = obj._missedAttackDamage;
    this->_normalAttackDamage = obj._normalAttackDamage;
    this->_jokeAttackDamage = obj._jokeAttackDamage;
    this->_vaulthunterAttackDamage = obj._vaulthunterAttackDamage;
}

FragTrap    &FragTrap::operator=(const FragTrap &obj)
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
    this->_crucialAttackDamage = obj._crucialAttackDamage;
    this->_trollAttackDamage = obj._trollAttackDamage;
    this->_missedAttackDamage = obj._missedAttackDamage;
    this->_normalAttackDamage = obj._normalAttackDamage;
    this->_jokeAttackDamage = obj._jokeAttackDamage;
    this->_vaulthunterAttackDamage = obj._vaulthunterAttackDamage;
    return (*this);
}

void        FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing "
        << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void        FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " did a melee attack at " << target << " , causing "
        << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void        FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    int       index;  
    void    (FragTrap::*p[5])(std::string const &) =
    {
        &FragTrap::crucialAttack,
        &FragTrap::trollAttack,
        &FragTrap::normalAttack,
        &FragTrap::missedAttack,
        &FragTrap::jokeAttack,
    };

    srand(time(0));
    index = rand() % 5;
    if (this->_energyPoints < 25)
        std::cout << "Not enough energy!" << std::endl;
    else
    {
        this->_energyPoints -= 25;
        ((this->*p[index]))(target);
    }
}

void        FragTrap::crucialAttack(std::string const &target)
{
    this->_vaulthunterAttackDamage = this->_crucialAttackDamage;
    std::cout << this->_name << " did a crucial attack at " << target << " damaging " <<
        this->_crucialAttackDamage << " HP!" << std::endl;
}

void        FragTrap::trollAttack(std::string const &target)
{
    this->_vaulthunterAttackDamage = this->_trollAttackDamage;
    std::cout << this->_name << " did a troll attack at " << target << " damaging " <<
        this->_trollAttackDamage << " HP!" << std::endl;
}

void        FragTrap::normalAttack(std::string const &target)
{
    this->_vaulthunterAttackDamage = this->_normalAttackDamage;
    std::cout << this->_name << " did a normal attack at " << target << " damaging " <<
        this->_normalAttackDamage << " HP!" << std::endl;
}

void        FragTrap::missedAttack(std::string const &target)
{
    this->_vaulthunterAttackDamage = this->_missedAttackDamage;
    std::cout << this->_name << " did a missed attack at " << target << " damaging " <<
        this->_missedAttackDamage << " HP!" << std::endl;
}

void        FragTrap::jokeAttack(std::string const &target)
{
    this->_vaulthunterAttackDamage = this->_jokeAttackDamage;
    std::cout << this->_name << " did a joke attack at " << target << " damaging " <<
        this->_jokeAttackDamage << " HP!" << std::endl;
}

unsigned int    FragTrap::getVaulthunterAttackDamage(void)
{
    return (this->_vaulthunterAttackDamage);
}

unsigned int    FragTrap::getCrucialAttackDamage(void)
{
    return (this->_crucialAttackDamage);
}

unsigned int    FragTrap::getTrollAttackDamage(void)
{
    return (this->_trollAttackDamage);
}

unsigned int    FragTrap::getNormalAttackDamage(void)
{
    return (this->_normalAttackDamage);
}

unsigned int    FragTrap::getMissedAttackDamage(void)
{
    return (this->_missedAttackDamage);
}

unsigned int    FragTrap::getJokeAttackDamage(void)
{
    return (this->_jokeAttackDamage);
}
