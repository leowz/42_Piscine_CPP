/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:35:57 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:35:58 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    Zombie      *zPtr;
    ZombieEvent event;

    event.setZombieType("female");
    zPtr = event.newZombie("Hip zomb");
    std::cout << "Stack Zombie:" << std::endl;
    event.randomChump();
    std::cout << std::endl;
    std::cout << "Heap Zombie:" << std::endl;
    zPtr->announce();
    std::cout << std::endl;
    delete zPtr;
    return (0);
}
