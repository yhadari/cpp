#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    this->_type = "ice";
}

Ice::~Ice(){
}

Ice::Ice(Ice const& copy){
    *this = copy;
}

Ice& Ice::operator=(Ice const& autre){
    (void)autre;
    return *this;
}

AMateria*   Ice::clone() const{
    AMateria *materia = new Ice();
    return materia;
}