#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Constructor" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::~Cat(){
    std::cout << "Cat Destructor" << std::endl;
    delete this->_brain;
}

Cat::Cat(Cat const& copy){
    std::cout << "Cat Copy Constructor" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(Cat const& autre){
    std::cout << "Cat Assignment" << std::endl;
    this->_type = autre._type;
    this->_brain = autre._brain;
    return *this;
}

void    Cat::makeSound() const{
    std::cout << "myaw myaw" << std::endl;
}