/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:36 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:37 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void):AMateria("ice")
{
}

Ice::Ice(const Ice &obj)
{
    *this = obj;
}

Ice::~Ice(void)
{
}

Ice         &Ice::operator=(const Ice &obj)
{
    (void)obj;
    return (*this);
}

AMateria    *Ice::clone(void) const
{
    return (new Ice());
}

void        Ice::use(ICharacter &obj)
{
    AMateria::use(obj);
    std::cout << "* shoots an ice bolt at " << obj.getName() << " *" << std::endl;
}
