/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:19:25 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:19:27 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

# define UNIT_SIZE (32)

class Squad: public ISquad
{
    int                 _unit_count;
    ISpaceMarine        *_units[UNIT_SIZE];

public:
    Squad(void);
    Squad(const Squad &);
    ~Squad(void);

    Squad           &operator=(const Squad &);
    int             getCount(void) const;
    ISpaceMarine    *getUnit(int) const;
    int             push(ISpaceMarine *);
    bool            isAdded(ISpaceMarine *);
};
#endif
