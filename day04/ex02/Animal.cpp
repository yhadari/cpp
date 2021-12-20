#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Constructor" << std::endl;
    this->_type = "Animal";
}

Animal::~Animal(){
    std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(Animal const& copy){
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(Animal const& autre){
    std::cout << "Animal Assignment" << std::endl;
    this->_type = autre._type;
    return *this;
}

std::string Animal::getType() const{
    return this->_type;
}
