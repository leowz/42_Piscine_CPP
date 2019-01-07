/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:16:58 by zweng             #+#    #+#             */
/*   Updated: 2019/01/07 12:17:00 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void print_sentence(const char *str) {
    int     i = 0;
    char    c;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            c = str[i] - 32;
        else 
            c = str[i];
        std::cout << c;
        i++;
    }
}

int     main(int ac, char **av) {
    int     i = 1;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"  << std::endl;
    else
    {
        while (i < ac) {
            print_sentence(av[i]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
