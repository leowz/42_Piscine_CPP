#include "Brain.hpp"

Brain::Brain(void)
{
    std::stringstream   tmp;
    tmp << this;
    this->_addr = tmp.str();
}

Brain::Brain(const Brain &brain)
{
    this->_addr = brain._addr;
}

std::string Brain::identify(void)
{
    return (this->_addr);
}
