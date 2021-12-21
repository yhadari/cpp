#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource{

    AMateria *_clone_array[4];
    int _size;

    public:
    MateriaSource();
    MateriaSource(MateriaSource const& copy);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    MateriaSource& operator=(MateriaSource const& autre);
    ~MateriaSource();
};

#endif