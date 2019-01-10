/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:14:45 by zweng             #+#    #+#             */
/*   Updated: 2019/01/10 12:14:46 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap    bot1("bot1");
    FragTrap    bot2("bot2");

    std::cout << std::endl;
    std::cout << "Start the Battle"<< std::endl;
    std::cout << std::endl << "ROUND 1" << std::endl;
    bot1.meleeAttack(bot2.getName());
    bot2.takeDamage(bot1.getMeleeAttackDamage());

    std::cout << std::endl << "ROUND 2" << std::endl;
    bot2.rangedAttack(bot1.getName());
    bot1.takeDamage(bot2.getRangedAttackDamage());

    std::cout << std::endl << "ROUND 3" << std::endl;
    bot1.vaulthunter_dot_exe(bot2.getName());
    bot2.takeDamage(bot1.getVaulthunterAttackDamage());

    return (0);
}
