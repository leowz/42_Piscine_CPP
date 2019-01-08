/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:38:32 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:38:34 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain   Human::getBrain(void)
{
    return (this->_brain);
}

std::string Human::identify(void)
{
    return (this->getBrain().identify());
}
