/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:08:43 by zweng             #+#    #+#             */
/*   Updated: 2019/01/07 18:35:21 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RETRO_HPP
# define FT_RETRO_HPP

# include <string>
# include <cstdlib>
# include <iostream>
# include <curses.h>
# include <ncurses.h>
# include <chrono>
# include <fstream>
# include <sstream>

std::string g_debugger = "";

void debugger(std::string str)
{
    std::fstream     os;

    if (g_debugger.length() > 0)
    {
    os.open(g_debugger, std::fstream::out | std::fstream::app);
    os << str << std::endl;
    os.close();
    }
}

# endif
