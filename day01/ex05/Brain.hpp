/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:38:21 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:38:30 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>
# include <iostream>

class Brain
{
    std::string _addr;
public:
    Brain(void);
    Brain(const Brain &brain);
    std::string identify();
};

#endif
