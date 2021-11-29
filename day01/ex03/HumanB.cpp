/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:54:00 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/29 18:43:53 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name) : _name(name){
}

void    HumanB::setWeapon(Weapon& club_ref){
    
    this->_club_ptr = &club_ref;
}

void    HumanB::attack() const{
    
    cout << this->_name << "  attacks with his " << this->_club_ptr->getType() << endl;
}