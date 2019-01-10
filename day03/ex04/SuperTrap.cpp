/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:17:37 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:17:38 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    this->_name = "";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_maxHitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints = NinjaTrap::_energyPoints;
    this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    this->_level = 1;
    this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
    this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
    this->_armorDamageReduction = FragTrap::_armorDamageReduction;
    std::cout << "SP4G-TP created" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
    std::cout << "SP4G-TP " << this->_name << " Destroyed" << std::endl;
}

SuperTrap::SuperTrap(const std::string &name): FragTrap::FragTrap(name), NinjaTrap::NinjaTrap(name)
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_maxHitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints = NinjaTrap::_energyPoints;
    this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    this->_level = 1;
    this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
    this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
    this->_armorDamageReduction = FragTrap::_armorDamageReduction;
    std::cout << "SP4G-TP " << name << " created" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &obj)
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

SuperTrap    &SuperTrap::operator=(const SuperTrap &obj)
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

void        SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
}

void        SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}

void        SuperTrap::challengeNewcomer(void)
{
    int     i;

    srand(time(0));
    i = rand() % 5;
    std::cout << "[" << this->_name << "]" << " challenges the newcomer: ";
	if (i % 5 == 0)
		std::cout << "Boxing fight, bad luck :( " << std::endl;
	else if (i % 5 == 1)
		std::cout << "Joke challenge, are you a funny dude?" << std::endl;
	else if (i % 5 == 2)
		std::cout << "Singing challenge, good luck" << std::endl;
	else if (i % 5 == 3)
		std::cout << "Running challenge, who is going to win?" << std::endl;
	else if (i % 5 == 4)
		std::cout << "No challenge, you got lucky this time!" << std::endl;
}
