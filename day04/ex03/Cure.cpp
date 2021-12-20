#include "Cure.hpp"

Cure::Cure(){
    this->_type = "cure";
    std::cout << "Cure constructor" << std::endl;
}

Cure::~Cure(){
    std::cout << "Cure destructor" << std::endl;
}

AMateria*   Cure::clone() const{
    AMateria *materia = new Cure();
    return materia;
}

void    Cure::use(ICharacter& target){
}