/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:31:29 by zweng             #+#    #+#             */
/*   Updated: 2019/01/16 15:45:55 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

template <typename T>
int     easyfind(T container, int value)
{
    std::vector<int>::const_iterator	it = container.begin();
	std::vector<int>::const_iterator    ite = container.end();
    int                                 i = 0;

    while (it != ite)
    {
        if (*it == value)
            return (i);
        it++;
        i++;
    }
    if (it != container.end())
		return (i);
    return (-1);
}
#endif
