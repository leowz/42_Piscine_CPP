/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 18:30:43 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 21:41:10 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &obj)
{
	*this = obj;
}

Enemy::~Enemy(void)
{
}

Enemy	&Enemy::operator=(const Enemy &obj)
{
	this->_hp = obj.getHP();
	this->_type = obj.getType();
	return (*this);
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

int			Enemy::getHP(void) const
{
	return (this->_hp);
}

void		Enemy::takeDamage(int damage)
{
	if (this->getHP() > 0)
	{
		if (this->getHP() > damage)
			this->_hp -= damage;
		else
			this->_hp = 0;
	}
}

void		Enemy::setHP(int hp)
{
	if (hp >= 0)
		this->_hp = hp;
}
