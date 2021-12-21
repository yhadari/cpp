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
}

void AMateria::use(ICharacter& target){  
}