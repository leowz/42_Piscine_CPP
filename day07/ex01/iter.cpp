/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:51:15 by zweng             #+#    #+#             */
/*   Updated: 2019/01/15 15:23:39 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void    show_address(T &obj)
{
    std::cout << &obj << "\t" << obj << std::endl;
}

template <typename T>
void	iter(T *arr, int length, void (*p)(T &))
{
    int     i;

    i = 0;
    while (i < length)
    {
        (*p)(arr[i]);
        i++;
    }
}

int     main(void)
{
    std::string	test[] = 
    {
		"A", "BC", "DEF", "GHIJ", "KLMNO", "PQRSTU", "VWXYZ"
	};

    int 	test2[] =
	{
		1, 12, 123, 1234, 12345, 123456, 1234567
	};

    double 	test3[] =
	{
		1.00, 1.20, 12.30, 12.34, 123.45, 1234.56, 12345.67
	};

    std::cout << "Test1:" << std::endl;
    iter<std::string>(test, 7, &show_address<std::string>);

    std::cout << "Test2:" << std::endl;
    iter<int>(test2, 7, &show_address<int>);

    std::cout << "Test3:" << std::endl;
    iter<double>(test3, 7, &show_address<double>);


    return (0);
}
