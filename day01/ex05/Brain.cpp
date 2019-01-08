/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:38:18 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:38:19 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::stringstream   tmp;
    tmp << this;
    this->_addr = tmp.str();
}

Brain::Brain(const Brain &brain)
{
    this->_addr = brain._addr;
}

std::string Brain::identify(void)
{
    return (this->_addr);
}
