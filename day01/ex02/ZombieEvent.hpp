/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:35:49 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:35:55 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
    std::string _type;

public:
    ZombieEvent(void);
    void    setZombieType(std::string type);
    Zombie  *newZombie(std::string name);
    void    randomChump(void);
};

#endif
