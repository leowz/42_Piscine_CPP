#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    int         _count;
    AMateria    *_data[4];
    
public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &obj);
    ~MateriaSource(void);
    MateriaSource   &operator=(const MateriaSource &obj);

    void            learnMateria(AMateria *);
    AMateria        *createMateria(std::string const &);
};
#endif
