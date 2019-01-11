/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:19:13 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:19:20 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
    virtual ~ISquad(void) {};
    virtual int             getCount() const = 0;
    virtual ISpaceMarine    *getUnit(int) const = 0;
    virtual int             push(ISpaceMarine *) = 0;
};

#endif
