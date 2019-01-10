/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:16:56 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:16:57 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    FragTrap    bot1("Frag1");
    ScavTrap    bot2("Scav1");
    ClapTrap    bot3("Clap1");
    NinjaTrap   nin1("Ninja1");
    NinjaTrap   nin2("Ninja2");

    std::cout << std::endl;
    std::cout << "Start the Battle"<< std::endl;
    std::cout << std::endl << "ROUND 1" << std::endl;
    bot1.meleeAttack(bot2.getName());
    bot2.takeDamage(bot1.getMeleeAttackDamage());

    std::cout << std::endl << "ROUND 2" << std::endl;
    bot2.rangedAttack(bot1.getName());
    bot1.takeDamage(bot1.getRangedAttackDamage());

    std::cout << std::endl << "ROUND 3" << std::endl;
    bot1.vaulthunter_dot_exe(bot2.getName());
    bot2.takeDamage(bot1.getVaulthunterAttackDamage());

    std::cout << std::endl << "Challenge:" << std::endl;
    bot2.challengeNewcomer();

    std::cout << std::endl << "Ninja shoe:" << std::endl;
    nin1.ninjaShoebox(bot1);
    nin1.ninjaShoebox(bot2);
    nin1.ninjaShoebox(bot3);
    nin1.ninjaShoebox(nin2);
    return (0);
}
