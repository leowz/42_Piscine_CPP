/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:50:14 by zweng             #+#    #+#             */
/*   Updated: 2019/01/09 17:05:39 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

# include "ft_retro.hpp"

class Game
{
    int     _checkHit(int, int);
    int     _checkPHit(int, int);

    int     _death;
    int     _input;
    Alien   *_enemy;
    Player  *_player;
    int     _endGame;

    Bullet  *_bullet;

    int     _mapx;
    int     _mapy;

    int     _score;
    int     _level;
    int     _ammoPouch;

    int     _bspd;
    
    int     _menu;

    int     _eElite;
    int     _eBoss;
    int     _eCount;
    int     _eBullet;

public:
    Game(void);
    Game(const Game &);
    Game(const int x, const int y);
    ~Game(void);
    Game    &operator=(const Game &);

    int		checkEndgame(void);
    void    getInput(int);

    void    spawnEnemy(void);
    void	moveEnemies(void);
    void	clearMove(void);

    void	spawnPlayer(void);
    void	movePlayer(void);

    void	playerBullet(void);
    void	moveBullets(void);

    void	moveEnemyBullets(void);
    void	enemyBullet(void);

    int		score(void);
    int		life(void);
    int		level(void);

    void	drawPlayer(void);
    void	drawEnemy(void);

    int		getMenu(void);
    void	menuInput(int c);
    void	moveMenu(int i);

    void	setEndgame(int i);

    int		bulletCount(void);
    int		maxBulletCount(void);
};
#endif
