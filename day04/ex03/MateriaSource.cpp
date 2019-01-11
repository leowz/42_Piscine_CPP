/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:55 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:56 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _count(0)
{
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &obj)
{
    int         i;

    i = 0;
    if (this == &obj)
        return (*this);
    while (i < obj._count)
    {
      if (i < this->_count)
        delete this->_data[i];
      this->_data[i] = obj._data[i]->clone();
      i++;
    }
    return (*this);
}

void            MateriaSource::learnMateria(AMateria *obj)
{
    if (!obj || this->_count >= 4)
        return ;
    this->_data[this->_count] = obj->clone();
    this->_count++;
}

AMateria        *MateriaSource::createMateria(std::string const &type)
{
    int     i;

    i = 0;
    while (i < this->_count)
    {
       if (this->_data[i]->getType() == type)
          return this->_data[i]->clone(); 
       i++;
    }
    return (NULL);
}
