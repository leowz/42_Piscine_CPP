/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:42:42 by zweng             #+#    #+#             */
/*   Updated: 2019/01/08 11:42:43 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int     main(void)
{
    Human man;

    man.action("meleeAttack", "sheep");
    man.action("rangedAttack", "sheep");
    man.action("intimidatingShout", "sheep");
    return (0);
}
