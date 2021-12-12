#include "Fixed.hpp"

Fixed::Fixed() : _valeur(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed(){
    std::cout << "destructed called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &copy){
    std::cout << "Assignation operator called" << std::endl;
    this->_valeur = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_valeur;
}

void    Fixed::setRawBits(int const raw){
    this->_valeur = raw;
}