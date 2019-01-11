/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:29 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:34 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{

public:
    virtual ~IMateriaSource(void) {};
    virtual void        learnMateria(AMateria *) = 0;
    virtual AMateria    *createMateria(std::string const &) = 0;
};
#endif
