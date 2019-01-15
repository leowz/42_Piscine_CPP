/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:51:15 by zweng             #+#    #+#             */
/*   Updated: 2019/01/15 18:06:11 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int     main(void)
{
    unsigned int     i;

    i = 0;
    Array<int> test(10);
    Array<char> test1(10);
    while (i < 10)
    {
        test[i] = i;
        test1[i] = i + 65;
        i++;
    }

    std::cout << "Show test:" << std::endl;
    test.show();
    std::cout << std::endl;

    std::cout << "Show test:" << std::endl;
    test1.show();
    std::cout << std::endl;

    try
    {
       test[20]; 
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl;
    }
    return (0);
}
