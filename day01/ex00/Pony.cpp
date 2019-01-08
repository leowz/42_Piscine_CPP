/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:11:02 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:30:33 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string gender, int age):_name(name), _gender(gender), _age(age)
{
}

std::string    Pony::name(void)
{
    return (this->_name);
}

Pony::~Pony(void)
{
    std::cout << this->_name << " will no longer exist" << std::endl;
}

std::string    Pony::gender(void)
{
    return (this->_gender);
}

int    Pony::age(void)
{
    return (this->_age);
}

void    Pony::ponyRun(void)
{
    if (this->gender() == "female")
        std::cout << this->name() << " is running at 5 km/hour" << std::endl;
    else
        std::cout << this->name() << " is running at 15 km/hour" << std::endl;
}

void    Pony::ponyCry(void)
{
    if (this->gender() == "female")
        std::cout << this->name() << ": ho ho ho!" << std::endl;
    else
        std::cout << this->name() << ": ha ha ha!" << std::endl;
}
