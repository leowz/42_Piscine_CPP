/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 11:52:33 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 11:56:00 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "ft_retro.hpp"

class	Enemy {

	public:

		Enemy(void);
		Enemy(int x, int y);
		Enemy(int x, int y, int life);
		Enemy(Enemy &obj);
		virtual ~Enemy(void);
		Enemy &operator=(Enemy const &r);

		void		setPos(int x, int y);
		void		setLife(int i);

		int			getX(void);
		int			getY(void);

		void		moveRight(void);
		void		moveLeft(void);
		void		moveUp(void);
		void		moveDown(void);

		int			isHit(int x, int y);
		int			checkLife(void);

	protected:
		int			_x;
		int			_y;
		int			_life;

};
#endif
