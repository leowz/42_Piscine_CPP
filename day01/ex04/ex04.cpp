/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:37:49 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:37:51 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr;
    std::string &ref = str;

    ptr = &str;
    std::cout << "display by pointer:" << std::endl;
    std::cout << *ptr << std::endl; 
    std::cout << std::endl; 
    std::cout << "display by reference:" << std::endl;
    std::cout << ref << std::endl; 
}
