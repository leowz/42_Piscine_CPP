#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
    std::string _name;
    std::string _gender;
    int         _age;

public:
    Pony(void);
    Pony(std::string name, std::string gender, int age);
    std::string name(void);
    std::string gender(void);
    int         age(void);
    void        ponyRun(void);
    void        ponyCry(void);
};
#endif
