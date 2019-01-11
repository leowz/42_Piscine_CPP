/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:16:55 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:16:56 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
}

Victim::Victim(const std::string name): _name(name)
{
    std::cout << "Some random victim called " << this->name() <<
        " just popped !" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->name() <<
        " just died for no apparent reason !" << std::endl;
}

Victim::Victim(const Victim &obj)
{
    this->_name = obj.name();
}

std::string  Victim::name(void) const
{
    return (this->_name);
}

Victim       &Victim::operator=(const Victim &obj)
{
    this->_name = obj.name();
    return (*this);
}

void         Victim::getPolymorphed(void) const
{
    std::cout << this->name() << " has been turned into a cute little sheep !"
        << std::endl;
}

std::ostream    &operator<<(std::ostream &os, const Victim &obj)
{
    os << "I'm " << obj.name() << " and i like otters !" << std::endl;
    return (os);
}
