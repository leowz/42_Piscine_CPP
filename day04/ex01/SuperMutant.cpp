/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 19:06:09 by zweng             #+#    #+#             */
/*   Updated: 2018/12/27 21:31:06 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &obj)
{
	*this = obj;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &obj)
{
	Enemy::operator=(obj);
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	if (damage > 3)
		Enemy::takeDamage(damage - 3);
}
