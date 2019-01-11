/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:16:32 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:16:35 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{
    Peon(void);
public:
    Peon(const std::string name); 
    ~Peon(void);
    Peon(const Peon &obj);

    Peon       &operator=(const Peon &obj);

    void         getPolymorphed(void) const;
};

std::ostream    &operator<<(std::ostream &os, const Peon &obj);
#endif
