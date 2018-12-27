#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{
    Peon(void);
public:
    Peon(const std::string name); 
    ~Peon(void);
    Peon(const Peon &obj);

    Peon       &operator=(const Peon &obj);

    void         getPolymorphed(void) const;
};

std::ostream    &operator<<(std::ostream &os, const Peon &obj);
#endif
