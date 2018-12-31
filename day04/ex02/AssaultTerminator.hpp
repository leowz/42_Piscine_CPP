#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{

public:
    AssaultTerminator(void);
    AssaultTerminator(const AssaultTerminator &);
    ~AssaultTerminator(void);
    AssaultTerminator  &operator=(const AssaultTerminator &);

    ISpaceMarine    *clone(void) const;
    void            battleCry(void) const;
    void            rangedAttack(void) const;
    void            meleeAttack(void) const;
};
#endif
