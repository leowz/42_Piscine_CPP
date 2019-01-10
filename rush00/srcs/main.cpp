/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:58:19 by zweng             #+#    #+#             */
/*   Updated: 2019/01/09 11:47:48 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_retro.hpp"
#include "Game.hpp"

void    help_menu(int y, int x)
{
    WINDOW  *help = newwin(13, 25, x, y);
    box(help, 0, 0);
    mvwprintw(help, 1, 8, "CONTROLS");
	mvwprintw(help, 3, 2, "SHOOT: Spacebar");
	mvwprintw(help, 5, 2, "MOVE LEFT: <-, 4");
	mvwprintw(help, 7, 2, "MOVE RIGHT: ->, 6");
	mvwprintw(help, 9, 2, "SHOOT STRAFE LEFT: 1");
	mvwprintw(help, 11, 2, "SHOOT STRAFE RIGHT: 3");
	wrefresh(help);
	wclear(help);
	delwin(help);
}

bool     game(void)
{
    int c = 0;
    int col = 0;
    int row = 0;

    std::stringstream   ss;
    start_color();
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_GREEN, COLOR_BLACK);
	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(6, COLOR_BLUE, COLOR_BLACK);
    refresh();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);

    getmaxyx(stdscr, col, row);
    ss.str("");
    ss << "col and row max" << col << " , " << row;
    debugger(ss.str());
    
    Game    game = Game(row - 2, col - 2);
    debugger("start inner while");
    while (game.gameStatus() == 2)
    {
        if ((c = getch()) != ERR)
        {
            if (c == ' ')
            {
                ss.str("");
                ss << "put menu at " << (col/2) - 3 << " , " << (row/2) + 7;
                debugger(ss.str());
                help_menu(5 , 5);
            }
            else
                break ;
        }
    }


    Timer   timer(clock());
    int     curr_time = timer.checkTime(clock());
    int     x = 0;
    int     y = 0;
    int     cnt = 0;

    while (game.gameStatus() == 1)
    {
    
    }

    return (true);
}

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        g_debugger = av[1];
        debugger("debugger open");
    }

    srand(time(NULL));
    initscr();
    noecho();
    cbreak();
    curs_set(0);

    debugger("start big while");
    while (42)
    {
        if (!game())
            break ;
    }
    endwin();
    return (0);
}
