/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Elite.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:41:56 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:42:50 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELITE_HPP
# define ELITE_HPP

# include "ft_retro.hpp"
# include "Enemy.hpp"

class	Elite : public Enemy {

	public:

		Elite(void);
		Elite(int x, int y);
		Elite(Elite &obj);
		virtual ~Elite(void);
		Elite &operator=(Elite const &r);

		int		moveElite(int map, int end);
		void	clearElite(void);
		void	drawElite(void);
		int		isAlive(void);
		int		isEHit(int x, int y);

};
#endif
