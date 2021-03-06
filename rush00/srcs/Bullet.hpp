/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:43:56 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 14:47:39 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

# include "ft_retro.hpp"

class	Bullet {

	public:

		Bullet(void);
		Bullet(int x, int y);
		Bullet(Bullet &obj);
		virtual ~Bullet(void);
		Bullet &operator=(Bullet const &r);

		int			getX(void);
		int			getY(void);
		int			checkLife(void);

		void		moveDown(void);
		void		moveUp(void);

		void		shootBullet(void);
		void		shootEBullet(void);
		void		clearBullet(void);

		void		eliteShot(void);
		void		eliteDown(int i);

		void		setLife(int i);
		void		setInfo(int x, int y, int life);

	protected:
		int		_x;
		int		_y;
		int		_type;
		int		_life;

};
#endif
