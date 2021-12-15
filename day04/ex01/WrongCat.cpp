#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat Constructor" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy){
    std::cout << "WrongCat Copy Constructor" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(WrongCat const& autre){
    std::cout << "WrongCat Assignment" << std::endl;
    this->_type = autre._type;
    return *this;
}

void    WrongCat::makeSound() const{
    std::cout << "myaw myaw" << std::endl;
}