/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:16:44 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:16:47 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
public:

    NinjaTrap(void);
    NinjaTrap(const std::string &name);
    ~NinjaTrap(void);
    NinjaTrap(const NinjaTrap &obj);

    NinjaTrap       &operator=(const NinjaTrap &obj);
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);

    void            ninjaShoebox(const ClapTrap &obj);
    void            ninjaShoebox(const FragTrap &obj);
    void            ninjaShoebox(const ScavTrap &obj);
    void            ninjaShoebox(const NinjaTrap &obj);
};

#endif
