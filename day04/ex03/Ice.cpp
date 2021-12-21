#include "Ice.hpp"

Ice::Ice(){
    this->_type = "ice";
    std::cout << "Ice constructor" << std::endl;
}

Ice::~Ice(){
    std::cout << "Ice destructor" << std::endl;
}

Ice::Ice(Ice const& copy){
    *this = copy;
}

AMateria*   Ice::clone() const{
    AMateria *materia = new Ice();
    return materia;
}

Ice& Ice::operator=(Ice const& autre){
}

void    Ice::use(ICharacter& target){
}