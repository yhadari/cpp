#include "AMateria.hpp"

AMateria::AMateria(std::string const& type): _type(type){
}

AMateria::AMateria(){
}

AMateria::AMateria(AMateria const& copy){
    *this = copy;
}

AMateria::~AMateria(){
}

std::string const & AMateria::getType() const{
    return this->_type;
}

AMateria& AMateria::operator=(AMateria const& autre){
    (void)autre;
    return *this;
}

void AMateria::use(ICharacter& target){
    if (this->_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    if (this->_type == "cure")
        std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}