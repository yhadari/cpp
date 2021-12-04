/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:20:25 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/04 21:38:42 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _valeur(0){
    
    std::cout << "constructed called" << std::endl;
}

Fixed::~Fixed(){
    
    std::cout << "destructed called" << std::endl;
}

int Fixed::getRawBits(void) const{

    return this->_valeur;
}

void    Fixed::setRawBits(int const raw){

    this->_valeur = raw;
}