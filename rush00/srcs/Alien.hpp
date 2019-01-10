/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alien.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:54:23 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 15:08:55 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALIEN_HPP
# define ALIEN_HPP

# include "ft_retro.hpp"
# include "Enemy.hpp"

class	Alien : public Enemy {

	public:

		Alien(void);
		Alien(int x, int y);
		Alien(Alien &obj);
		virtual ~Alien(void);
		Alien &operator=(Alien const &r);

		int		movement(int map, int end);
		int		isAlive(void);

};
#endif
