/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 18:31:02 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 19:23:02 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
private:
	int			_hp;
	std::string	_type;

public:
	Enemy(void);
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &obj);
	virtual	~Enemy(void);
	Enemy	&operator=(const Enemy &obj);

	std::string		getType(void) const;
	int				getHP(void) const;
	void			setHP(int);
	virtual	void	takeDamage(int);
};
#endif
