/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:39 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:41 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{

public:
    Ice(void);
    Ice(const Ice &);
    ~Ice(void);
    Ice &operator=(const Ice &);

    AMateria    *clone(void) const;
    void        use(ICharacter &);
};
#endif
