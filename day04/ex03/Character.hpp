#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
    std::string _name;
    int         _mcount;
    AMateria    *_inventory[4];

public:
    Character(void);
    Character(const std::string &);
    Character(const Character &);
    ~Character(void);
    Character           &operator=(const Character &);

    std::string const   &getName(void) const;
    void                equip(AMateria *);
    void                unequip(int);
    void                use(int, ICharacter &);
};
#endif
