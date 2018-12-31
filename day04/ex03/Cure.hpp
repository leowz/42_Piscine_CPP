#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{

public:
    Cure(void);
    Cure(const Cure &);
    ~Cure(void);
    Cure        &operator=(const Cure &);

    AMateria    *clone(void) const;
    void        use(ICharacter &);
};
#endif
