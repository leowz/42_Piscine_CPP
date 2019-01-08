/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:11:22 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:11:29 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheHeap()
{
    Pony    *ponyPtr = new Pony("Heap Pony", "male", 8);

    ponyPtr->ponyRun();
    ponyPtr->ponyCry();

    delete ponyPtr;
}
static void ponyOnTheStack()
{
    Pony    pony = Pony("Stack Pony", "female", 10);
    
    pony.ponyRun();
    pony.ponyCry();
}

int     main(void)
{
    std::cout << "~~ Pony on the Heap ~~" << std::endl;
    ponyOnTheHeap();
    std::cout << std::endl;
    std::cout << "~~ Pony on the Stack ~~" << std::endl;
    ponyOnTheStack();
    return (0);
}
