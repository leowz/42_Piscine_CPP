#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->_name = "";
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    std::cout << "SC4G-TP created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "SC4G-TP " << this->_name << " Destroyed" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): _name(name)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    std::cout << "SC4G-TP " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
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

ScavTrap    &ScavTrap::operator=(const ScavTrap &obj)
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

void        ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "SC4G-TP " << this->_name << " attacks " << target << " at range, causing "
        << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "SC4G-TP " << this->_name << " did a melee attack at " << target << " , causing "
        << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void        ScavTrap::takeDamage(unsigned int amount)
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

void        ScavTrap::beRepaired(unsigned int amount)
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

void        ScavTrap::challengeNewcomer(void)
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

std::string     ScavTrap::getName(void)
{
    return (this->_name);
}

unsigned int    ScavTrap::getMeleeAttackDamage(void)
{
    return (this->_meleeAttackDamage);
}

unsigned int    ScavTrap::getRangedAttackDamage(void)
{
    return (this->_rangedAttackDamage);
}

unsigned int    ScavTrap::getArmorDamageReduction(void)
{
    return (this->_armorDamageReduction);
}
