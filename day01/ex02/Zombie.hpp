#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie {
    std::string _name;
    std::string _type;

public:
    Zombie(std::string name, std::string type);
    void    announce(void);
};
#endif
