/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:19:33 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:19:35 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{

public:
    TacticalMarine(void);
    TacticalMarine(const TacticalMarine &);
    ~TacticalMarine(void);
    TacticalMarine  &operator=(const TacticalMarine &);

    ISpaceMarine    *clone(void) const;
    void            battleCry(void) const;
    void            rangedAttack(void) const;
    void            meleeAttack(void) const;
};

#endif
