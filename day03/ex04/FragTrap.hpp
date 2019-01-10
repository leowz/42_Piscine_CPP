/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:17:17 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:17:21 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    unsigned int    _crucialAttackDamage;
    unsigned int    _trollAttackDamage;
    unsigned int    _normalAttackDamage;
    unsigned int    _missedAttackDamage;
    unsigned int    _vaulthunterAttackDamage;
    unsigned int    _jokeAttackDamage;

public:

    FragTrap(void);
    FragTrap(const std::string &name);
    ~FragTrap(void);
    FragTrap(const FragTrap &obj);

    FragTrap        &operator=(const FragTrap &obj);
    void            rangedAttack(std::string const &target);
    void            meleeAttack(std::string const &target);

    void            vaulthunter_dot_exe(std::string const &target);
    void            crucialAttack(std::string const &target);
    void            trollAttack(std::string const &target);
    void            normalAttack(std::string const &target);
    void            missedAttack(std::string const &target);
    void            jokeAttack(std::string const &target);
    
    unsigned int    getVaulthunterAttackDamage(void);
    unsigned int    getCrucialAttackDamage(void);
    unsigned int    getTrollAttackDamage(void);
    unsigned int    getNormalAttackDamage(void);
    unsigned int    getMissedAttackDamage(void);
    unsigned int    getJokeAttackDamage(void);
};

#endif
