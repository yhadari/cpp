#include "Fixed.hpp"

Fixed::Fixed() : _valeur(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int nb){
    std::cout << "Int constructor called" << std::endl;
    this->_valeur = (nb * (int)(1<<this->_nb_bit));
}

Fixed::Fixed(const float nb){
    std::cout << "Float constructor called" << std::endl;
    this->_valeur = roundf(nb * (float)(1<<this->_nb_bit));
}

Fixed::~Fixed(){
    std::cout << "destructed called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &copy){
    std::cout << "Assignation operator called" << std::endl;
    this->_valeur = copy.getRawBits();
    return *this;
}

std::ostream&   operator<<(std::ostream& os, Fixed const& objet){
    os << objet.toFloat();
    return os;
}

int Fixed::getRawBits(void) const{
    return this->_valeur;
}

void    Fixed::setRawBits(int const raw){
    this->_valeur = raw;
}

int Fixed::toInt(void) const{
    return ((int)this->_valeur / (int)(1<<this->_nb_bit));
}

float Fixed::toFloat(void) const{
    return ((float)this->_valeur / (float)(1<<this->_nb_bit));
}