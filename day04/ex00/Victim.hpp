#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
    Victim(void);

protected:
    std::string _name;

public:
   Victim(const std::string name); 
   ~Victim(void);
   Victim(const Victim &obj);

   std::string  name(void) const;
   Victim       &operator=(const Victim &obj);

   virtual void getPolymorphed(void) const;
};

std::ostream    &operator<<(std::ostream &os, const Victim &obj);
#endif
