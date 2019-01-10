/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:49:37 by zweng             #+#    #+#             */
/*   Updated: 2019/01/09 17:16:32 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

Game::Game(void)
{
}

Game::Game(const Game &obj)
{
    *this = obj;
}

Game::Game(const int x, const int y): _endgame(2), _mapx(x), _mapy(y), _menu(1)
{
    this->_eCount = 8;
	this->_eBullet = 8;
	this->_eElite = 0;
	this->_ammoPouch = 14;

	this->_bullet = new Bullet[this->_ammoPouch];
	this->_ebullet = new Bullet[this->_eBullet];
	this->_enemy = new Alien[this->_eCount];

	this->_elite = new Elite[this->_eElite];
	this->_elitebullet = new Bullet[this->_eElite * 3];

	this->_score = 0;
	this->_bspd = 34;
	this->_death = 0;
	this->_level = 0;

	spawnEnemy();
	spawnPlayer();
	this->_player.setLife(5);
}

Game::~Game(void)
{
}

Game    &Game::operator=(const Game &obj)
{
    this->_input = obj._input;
	for (int i = 0; i < 10; i++) {
		this->_enemy[i] = obj._enemy[i];
	}
	this->_player = obj._player;
	this->_endgame = obj._endgame;
	return (*this);
}

int     Game::checkEndgame(void)
{
    return (this->_endgame);
}

void    Game::getInput(int c)
{
}

void    Game::spawnEnemy(void)
{
}

void	Game::moveEnemies(void)
{
}
    void	clearMove(void);

    void	spawnPlayer(void);
    void	movePlayer(void);

    void	playerBullet(void);
    void	moveBullets(void);

    void	moveEnemyBullets(void);
    void	enemyBullet(void);

int		Game::score(void)
{
    return (this->_score);
}

int		Game::life(void)
{
    return (this->_player.lift());
}

int		Game::level(void)
{

}

    void	drawPlayer(void);
    void	drawEnemy(void);

    int		getMenu(void);
    void	menuInput(int c);
    void	moveMenu(int i);

    void	setEndgame(int i);

    int		bulletCount(void);
    int		maxBulletCount(void);
