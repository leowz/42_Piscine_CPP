/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 20:28:42 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 21:59:33 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(std::string const &name): _name(name), _ap(40), _wp(NULL)
{
}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character	&Character::operator=(const Character &obj)
{
	this->_name = obj.getName();
	this->_ap = obj.getAp();
	this->_wp = obj._wp;
	return (*this);
}

Character::~Character(void)
{
}

void		Character::recoverAP(void)
{
	this->_ap += 10;
	if (this->getAp() > 40)
		this->_ap = 40;
}

void		Character::equip(AWeapon *wp)
{
	if (!wp)
		return ;
	this->_wp = wp;
}

void		Character::attack(Enemy *obj)
{
	AWeapon	*wp;

	wp = this->_wp;
	if (wp)
	{
		std::cout << this->getName() <<" attacks " << obj->getType() << 
			" with a " << wp->getName() << std::endl;
		this->_ap -= wp->getAPCost();
		wp->attack();
		obj->takeDamage(wp->getDamage());
		if (obj->getHP() <= 0)
			delete obj;
	}
}

std::string	Character::getName() const
{
	return (this->_name);
}


AWeapon		*Character::getWeapon(void) const
{
	return (this->_wp);
}

int			Character::getAp(void) const
{
	return (this->_ap);
}

std::ostream	&operator<<(std::ostream &os, const Character &obj)
{
	AWeapon		*wp;

	wp = obj.getWeapon();
	if (wp)
	{
		std::cout << obj.getName() << " has " << obj.getAp()
			<< " AP and wields a " << wp->getName() << std::endl;
	}
	else
	{
		std::cout << obj.getName() <<" has " << obj.getAp() <<
			" AP and is unarmed" << std::endl;
	}
	return (os);
}
