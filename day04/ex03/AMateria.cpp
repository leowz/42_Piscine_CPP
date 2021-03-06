/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:03 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:04 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void):_xp(0), _type("")
{
}

AMateria::AMateria(std::string const &type):_xp(0), _type(type)
{
}

AMateria::AMateria(const AMateria &obj)
{
    *this = obj;
}

AMateria::~AMateria(void)
{
}

AMateria            &AMateria::operator=(const AMateria &obj)
{
    this->_type = obj._type;
    this->_xp = obj._xp;
    return (*this);
}

std::string const   &AMateria::getType(void) const
{
    return (this->_type);
}

unsigned int        AMateria::getXP(void) const
{
    return (this->_xp);
}

void                AMateria::use(ICharacter &target)
{
    (void)target;
    this->_xp += 10;
}
