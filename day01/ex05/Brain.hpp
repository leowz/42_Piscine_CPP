#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>
# include <iostream>

class Brain
{
    std::string _addr;
public:
    Brain(void);
    Brain(const Brain &brain);
    std::string identify();
};

#endif
