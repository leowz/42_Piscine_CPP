#include "Human.hpp"

int     main(void)
{
    Human man;

    man.action("meleeAttack", "sheep");
    man.action("rangedAttack", "sheep");
    man.action("intimidatingShout", "sheep");
    return (0);
}
