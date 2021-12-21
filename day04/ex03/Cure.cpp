#include "Cure.hpp"

Cure::Cure(){
    this->_type = "cure";
}

Cure::~Cure(){
}

Cure::Cure(Cure const& copy){
    *this = copy;
}

Cure& Cure::operator=(Cure const& autre){
    (void)autre;
    return *this;
}

AMateria*   Cure::clone() const{
    AMateria *materia = new Cure();
    return materia;
}