#include "Cure.hpp"

Cure::Cure(){
    this->_type = "cure";
    std::cout << "Cure constructor" << std::endl;
}

Cure::~Cure(){
    std::cout << "Cure destructor" << std::endl;
}

Cure::Cure(Cure const& copy){
    *this = copy;
}

AMateria*   Cure::clone() const{
    AMateria *materia = new Cure();
    return materia;
}

Cure& Cure::operator=(Cure const& autre){
}

void    Cure::use(ICharacter& target){
}