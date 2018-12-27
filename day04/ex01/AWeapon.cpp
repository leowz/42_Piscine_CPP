/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 16:53:53 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 21:41:57 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
}

AWeapon::~AWeapon(void)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name),
	_apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &obj)
{
	(*this) = obj;
}

AWeapon	&AWeapon::operator=(const AWeapon &obj)
{
	this->_name = obj.getName();
	this->_damage = obj.getDamage();
	this->_apcost = obj.getAPCost();
	return (*this);
}

std::string	AWeapon::getName(void) const
{
	return (this->_name);
}

int			AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int			AWeapon::getDamage(void) const
{
	return (this->_damage);
}
