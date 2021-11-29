/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:19:46 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/29 18:42:42 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &club_ref) : _name(name), _club_ref(club_ref){
}

void HumanA::attack() const{
    cout << this->_name << " attacks with his " << this->_club_ref.getType() << endl;
}