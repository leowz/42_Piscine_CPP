#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Human did a mellee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Human did a ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Human did a intimidating shout on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    int     i = 0;

    void    (Human::*ptr[])(std::string const &) = 
    {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };
    std::string name[] =
    {
        "meleeAttack",
        "rangedAttack",
        "intimidatingShout",
    };
    while (i < 3)
    {
        if (action_name == name[i])
        {
            (this->*ptr[i])(target);
            break ;
        }
        else
            i++;
    }
}
