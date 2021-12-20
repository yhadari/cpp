#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Constructor" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::~Dog(){
    std::cout << "Dog Destructor" << std::endl;
    delete this->_brain;
}

Dog::Dog(Dog const& copy){
    std::cout << "Dog Copy Constructor" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(Dog const& autre){
    std::cout << "Dog Assignment" << std::endl;
    this->_type = autre._type;
    this->_brain = new Brain();
    *this->_brain = *autre._brain;
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "how how" << std::endl;
}