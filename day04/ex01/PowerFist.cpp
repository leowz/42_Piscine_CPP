/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 18:06:06 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 21:35:52 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &obj)
{
	(*this) = obj;
}

PowerFist::~PowerFist(void)
{
}

PowerFist	&PowerFist::operator=(const PowerFist &obj)
{
	AWeapon::operator=(obj);
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
