/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 20:28:39 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 21:24:23 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string		_name;
	int				_ap;
	AWeapon			*_wp;

	Character(void);

public:
	Character(std::string const &);
	Character(const Character &);
	Character	&operator=(const Character &);
	~Character(void);

	void		recoverAP(void);
	void		equip(AWeapon *);
	void		attack(Enemy *);
	std::string	getName(void) const;
	int			getAp(void) const;
	AWeapon		*getWeapon(void) const;
};

std::ostream	&operator<<(std::ostream &, const Character &);
#endif
