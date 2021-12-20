#include "Ice.hpp"

Ice::Ice(){
    this->_type = "Ice";
    std::cout << "Ice constructor" << std::endl;
}

Ice::~Ice(){
    std::cout << "Ice destructor" << std::endl;
}

AMateria*   Ice::clone() const{
    AMateria *materia = new Ice();
    return materia;
}

void    Ice::use(ICharacter& target){
}