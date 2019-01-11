/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:16:50 by zweng             #+#    #+#             */
/*   Updated: 2019/01/11 10:16:53 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
    std::string _name;
    std::string _title;

    Sorcerer(void);

public:
    Sorcerer(const std::string &name, const std::string &title);
    ~Sorcerer(void);
    Sorcerer(const Sorcerer &obj);

    Sorcerer    &operator=(const Sorcerer &obj);
    std::string name(void) const;
    std::string title(void) const;

    void        polymorph(Victim const &obj) const;
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &obj);
#endif
