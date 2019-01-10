/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 18:18:25 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:38:18 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(void) : Enemy() {}

Player::Player(int x, int y) : Enemy(x, y, 5) {}

Player::Player(Player &obj) {
	*this = obj;
}

Player::~Player(void) {}

Player &Player::operator=(Player const &r) {
	this->_x = r._x;
	this->_y = r._y;
	this->_life = r._life;
	return (*this);
}

int			Player::loseLife(void) {
	this->_life--;
	if (this->_life <= 0)
		return (1);
	return (0);
}
int			Player::bulletHit(void) {
	static int i = 0;

	this->_life--;
	if (this->_life == 0 || (this->_life <= -1 && i >= 4))
	{
		i = 0;
		return (1);
	}
	if (this->_life <= -1)
	{
		this->_life = this->_life + 5 - i;
		i++;
	}
	return (0);
}
