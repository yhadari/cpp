#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _size(0){
}

MateriaSource::~MateriaSource(){
}

MateriaSource::MateriaSource(MateriaSource const& copy){
    *this = copy;
}

void MateriaSource::learnMateria(AMateria* m){
    if (this->_size < 4){
        this->_clone_array[this->_size] = m;
        this->_size++;
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const& autre){
    (void)autre;
    return *this;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    AMateria *m = NULL;
    if (type == "ice")
        m = new Ice();
    if (type == "cure")
        m = new Cure();
    return m;
}