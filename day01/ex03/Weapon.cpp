/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:45:39 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/29 18:32:48 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string club) : _club(club){
}

const string Weapon::getType() const{
    const string &str_ref = this->_club;
    return str_ref;
}

void    Weapon::setType(string newclub){
    this->_club = newclub;
}