#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Constructor" << std::endl;
    this->_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy){
    std::cout << "WrongAnimal Copy Constructor" << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& autre){
    std::cout << "WrongAnimal Assignment" << std::endl;
    this->_type = autre._type;
    return *this;
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->_type;
}