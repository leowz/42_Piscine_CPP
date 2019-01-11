/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:24 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:27 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

class AMateria;

class ICharacter
{

public:
    virtual ~ICharacter(void) {};
    virtual std::string const   &getName(void) const = 0;
    virtual void                equip(AMateria *) = 0;
    virtual void                unequip(int) = 0;
    virtual void                use(int, ICharacter &) = 0;
};
#endif
