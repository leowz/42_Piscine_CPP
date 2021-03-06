/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:17:39 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:17:42 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:

    SuperTrap(void);
    SuperTrap(const std::string &name);
    ~SuperTrap(void);
    SuperTrap(const SuperTrap &obj);

    SuperTrap        &operator=(const SuperTrap &obj);
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);
    void            challengeNewcomer(void);
};

#endif
