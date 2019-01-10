/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Elite.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:41:54 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:43:05 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Elite.hpp"

Elite::Elite(void) : Enemy() {}

Elite::Elite(int x, int y) : Enemy(x, y) {}

Elite::Elite(Elite &obj) {
	*this = obj;
}

Elite::~Elite(void) {}

Elite &Elite::operator=(Elite const &r) {
	this->_x = r._x;
	this->_y = r._y;
	this->_life = r._life;
	return (*this);
}

int			Elite::isEHit(int x, int y) {
	for (int i = -1; i < 2; i++)
	{
		if ((this->_x == (x + i) && this->_y == y) ||
			((this->_x - 1) == (x + i) && this->_y == y) ||
			((this->_x + 1) == (x + i) && this->_y == y))
		{
			this->_life--;
				if (this->_life == 0) {
					system("afplay sound/boss_death.mp3 &");
					return (1);
				}
			return (1);
		}
	}
	return (0);
}

void		Elite::drawElite(void) {
	int i = 0;

	if (this->_life > 20)
		i = 6;
	else if (this->_life >= 8)
		i = 4;
	else
		i = 2;
	attron(COLOR_PAIR(i));
	mvprintw(this->_y, this->_x, "V");
	mvprintw(this->_y - 1, this->_x + 1, ">");
	mvprintw(this->_y - 1, this->_x - 1, "<");
	mvprintw(this->_y - 2, this->_x, "^");
	mvprintw(this->_y - 1, this->_x, "+");
	attroff(COLOR_PAIR(i));
}

void		Elite::clearElite(void) {
	mvprintw(this->_y, this->_x, " ");
	mvprintw(this->_y - 1, this->_x + 1, " ");
	mvprintw(this->_y - 1, this->_x - 1, " ");
	mvprintw(this->_y - 2, this->_x, " ");
	mvprintw(this->_y - 1, this->_x, " ");
}

int			Elite::moveElite(int map, int end) {
	float prob = 1.0 * rand() / RAND_MAX;

	if (prob < 0.47) {
		if (this->_x > 1) {
			moveLeft();
		}
		else {
			moveRight();
		}
	}
	else if (prob < 0.95) {
		if (this->_x < end) {
			moveRight();
		}
		else {
			moveLeft();
		}
	}
	else {
		if (this->_y < (map - 1))	moveDown();
		else {
			this->_life--;
			if (this->_life == 0)
			{
				clearElite();
				return (1);
			}
		}
	}
	return (0);
}

int			Elite::isAlive(void) {
	return (this->_life);
}
