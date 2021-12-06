/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:20:25 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/06 16:41:43 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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