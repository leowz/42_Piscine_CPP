/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:39:22 by zweng             #+#    #+#             */
/*   Updated: 2019/01/16 16:01:19 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int     main(void)
{
    std::vector<int>    vect;
    std::vector<int>::const_iterator	it;
    int                 ret;
    int                 toFind;
    srand(time(0));

    
    vect.push_back(rand() % 10);
	vect.push_back(rand() % 10);
	vect.push_back(rand() % 10);
	vect.push_back(rand() % 10);
	vect.push_back(rand() % 10);
	vect.push_back(rand() % 10);
	vect.push_back(rand() % 10);
    toFind = rand() % 10;

    it = vect.begin();
    std::cout << "vector:" << std::endl;
    while (it != vect.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
    std::cout << "number to find is: " << toFind << std::endl;
    std::cout << std::endl;

    if ((ret = easyfind(vect, toFind)) < 0)
    {
        std::cout << "result not find: " << std::endl;
    }
    else
    {
        std::cout << toFind << " find at index of [" << ret << "]" << std::endl;
    }
    return (0);
}
