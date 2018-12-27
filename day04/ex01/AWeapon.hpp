/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 16:53:44 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 17:19:38 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
private:
	std::string 	_name;
	int				_damage;
	int				_apcost;

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(void);
	virtual ~AWeapon(void);
	AWeapon(const AWeapon &obj);
	AWeapon	&operator=(const AWeapon &obj);

	std::string		getName(void) const;
	int				getAPCost(void) const;
	int				getDamage(void) const;
	virtual void	attack(void) const = 0;
};
#endif
