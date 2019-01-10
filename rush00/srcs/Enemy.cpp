/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 11:52:30 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 11:58:25 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) : _life(1) {}

Enemy::Enemy(int x, int y) : _x(x), _y(y), _life(1) {}

Enemy::Enemy(int x, int y, int life) : _x(x), _y(y), _life(life) {}

Enemy::Enemy(Enemy &obj) { 
	*this = obj;
}

Enemy::~Enemy(void) {}

Enemy &Enemy::operator=(Enemy const &r) {
	this->_x = r._x;
	this->_y = r._y;
	this->_life = r._life;
	return (*this);
}

void		Enemy::setPos(int x, int y) {
	this->_x = x;
	this->_y = y;
}

int			Enemy::getX(void) {
	return (this->_x);
}

int			Enemy::getY(void) {
	return (this->_y);
}

void		Enemy::moveRight(void) {
	this->_x++;
}

void		Enemy::moveLeft(void) {
	this->_x--;
}

void		Enemy::moveUp(void) {
	this->_y--;
}

void		Enemy::moveDown(void) {
	this->_y++;
}

int			Enemy::isHit(int x, int y) {
	if ((this->_x == x && this->_y == y) ||
		((this->_x - 1) == x && this->_y == y) ||
		((this->_x + 1) == x && this->_y == y))
	{
		this->_life = 0;
		return (1);
	}
	return (0);
}

int			Enemy::checkLife(void) {
	return (this->_life);
}

void		Enemy::setLife(int i) {
	this->_life = i;
}
