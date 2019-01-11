/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:16:57 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:17:00 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
    Victim(void);

protected:
    std::string _name;

public:
   Victim(const std::string name); 
   ~Victim(void);
   Victim(const Victim &obj);

   std::string  name(void) const;
   Victim       &operator=(const Victim &obj);

   virtual void getPolymorphed(void) const;
};

std::ostream    &operator<<(std::ostream &os, const Victim &obj);
#endif
