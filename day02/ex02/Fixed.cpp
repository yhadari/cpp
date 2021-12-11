/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:20:25 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/12 00:14:57 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _valeur(0){
}

Fixed::Fixed(Fixed const &copy){
    *this = copy;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const int nb){
    this->_valeur = (nb * (int)(1<<this->_nb_bit));
}

Fixed::Fixed(const float nb){
    this->_valeur = roundf(nb * (float)(1<<this->_nb_bit));
}

Fixed& Fixed::operator=(Fixed const &autre){
    this->_valeur = autre._valeur;
    return *this;
}

bool    Fixed::operator<(Fixed const &autre){
    
    return this->_valeur < autre._valeur;
}

bool    Fixed::operator>(Fixed const &autre){
    
    return this->_valeur > autre._valeur;
}

bool    Fixed::operator<=(Fixed const &autre){
    
    return this->_valeur <= autre._valeur;
}

bool    Fixed::operator>=(Fixed const &autre){
    
    return this->_valeur >= autre._valeur;
}

bool    Fixed::operator==(Fixed const &autre){
    
    return this->_valeur == autre._valeur;
}

bool    Fixed::operator!=(Fixed const &autre){
    
    return this->_valeur != autre._valeur;
}

std::ostream&   operator<<(std::ostream& os, const Fixed& objet){
    
    os << objet.toFloat();
    return os;
}

Fixed&  Fixed::operator++(){
    
    this->_valeur++;
    return *this;
}

Fixed   Fixed::operator++(int){
    
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed   Fixed::operator*(Fixed const &autre){

    Fixed tmp(this->toFloat()*autre.toFloat());
    return tmp;
}

Fixed   Fixed::operator/(Fixed const &autre){

    Fixed tmp(this->toFloat()/autre.toFloat());
    return tmp;
}

Fixed   Fixed::operator+(Fixed const &autre){

    Fixed tmp(this->toFloat()+autre.toFloat());
    return tmp;
}

Fixed   Fixed::operator-(Fixed const &autre){

    Fixed tmp(this->toFloat()-autre.toFloat());
    return tmp;
}

Fixed const&  Fixed::max(Fixed &a, Fixed const &b){
    
    if (a > b)
        return a;
    else
        return b;
}

Fixed const&  Fixed::min(Fixed &a, Fixed const &b){
    
    if (a < b)
        return a;
    else
        return b;
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
