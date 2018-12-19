#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    std::string _type;
public:
    Weapon(std::string str);
    const std::string   &getType(void);
    void                setType(std::string type);
};

#endif
