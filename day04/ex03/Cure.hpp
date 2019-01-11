/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:20:19 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:20:22 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{

public:
    Cure(void);
    Cure(const Cure &);
    ~Cure(void);
    Cure        &operator=(const Cure &);

    AMateria    *clone(void) const;
    void        use(ICharacter &);
};
#endif
