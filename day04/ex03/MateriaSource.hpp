/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:21:01 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:21:03 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    int         _count;
    AMateria    *_data[4];
    
public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &obj);
    ~MateriaSource(void);
    MateriaSource   &operator=(const MateriaSource &obj);

    void            learnMateria(AMateria *);
    AMateria        *createMateria(std::string const &);
};
#endif
