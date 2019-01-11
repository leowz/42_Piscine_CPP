/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:12 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:14 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
    std::string _name;
    int         _mcount;
    AMateria    *_inventory[4];

public:
    Character(void);
    Character(const std::string &);
    Character(const Character &);
    ~Character(void);
    Character           &operator=(const Character &);

    std::string const   &getName(void) const;
    void                equip(AMateria *);
    void                unequip(int);
    void                use(int, ICharacter &);
};
#endif
