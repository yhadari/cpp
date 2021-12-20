#include "AMateria.hpp"

AMateria::AMateria(std::string const& type): _type(type){
    std::cout << "Amateria constructor" << std::endl;
}

AMateria::AMateria(){
}

AMateria::~AMateria(){
    std::cout << "Amateria destructor" << std::endl;
}

std::string const & AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter& target){  
}