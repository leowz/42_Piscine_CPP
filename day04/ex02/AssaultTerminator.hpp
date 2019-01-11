/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:19:02 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:19:05 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{

public:
    AssaultTerminator(void);
    AssaultTerminator(const AssaultTerminator &);
    ~AssaultTerminator(void);
    AssaultTerminator  &operator=(const AssaultTerminator &);

    ISpaceMarine    *clone(void) const;
    void            battleCry(void) const;
    void            rangedAttack(void) const;
    void            meleeAttack(void) const;
};
#endif
