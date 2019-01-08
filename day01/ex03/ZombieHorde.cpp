/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:36:44 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:36:45 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    this->_zombs = new Zombie[n];
    this->_nbr = n;
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_zombs;
}

void    ZombieHorde::announce(void)
{
    int i = 0;

    while (i < this->_nbr)
    {
        this->_zombs[i].announce();
        i++;
    }
}
