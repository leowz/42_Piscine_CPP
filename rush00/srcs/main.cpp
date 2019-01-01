#include "ft_retro.hpp"

int     main(void)
{
    initscr();
    noecho();
    move(10, 10);
    printw("Hello word!");
    refresh();
    getch();
    endwin();
    return (0);
}
