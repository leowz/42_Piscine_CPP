/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:19:08 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:19:11 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
    public:
        virtual ~ISpaceMarine(void) {};
        virtual ISpaceMarine    *clone(void) const = 0;
        virtual void            battleCry(void) const = 0;
        virtual void            rangedAttack(void) const = 0;
        virtual void            meleeAttack(void) const = 0;
};

#endif
