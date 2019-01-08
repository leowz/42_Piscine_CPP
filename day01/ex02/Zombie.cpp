/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:35:32 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:35:33 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->_name << " (" << this->_type <<
        ")> Braiiiiiiinnnssss..." << std::endl;
}
