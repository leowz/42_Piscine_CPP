/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:36:34 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:36:35 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    int     index;
    int     index2;
    std::string names[] = {"Angel", "Eugenio", "Gerardo", "Giacomo", "Ignacio"
    "Terrance", "Rhodes", "Kristen", "Johnston"};
    std::string types[] = {"male", "female"};

    index = rand() % 8;
    index2 = rand() % 2;
    this->_name = names[index];
    this->_type = types[index2];
}

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->_name << " (" << this->_type <<
        ")> Braiiiiiiinnnssss..." << std::endl;
}
