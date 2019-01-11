/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:05 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:08 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{
private:
    std::string     _type;
    unsigned int    _xp;

public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(const AMateria &);
    AMateria            &operator=(const AMateria &);
    virtual ~AMateria(void);
    std::string const   &getType(void) const;
    unsigned int        getXP(void) const;

    virtual AMateria    *clone(void) const = 0;
    virtual void        use(ICharacter &target);
};
#endif
