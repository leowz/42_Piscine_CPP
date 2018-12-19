#include "Logger.hpp"

int     main(int ac, char **av)
{
    Logger logger;

    if (ac == 3)
    {
       logger.log(av[1], av[2]);
    }
    else
    {
        logger.log("file", "a message to the file");
        logger.log("console", "a message to the console");
    }
    return (0);
}
