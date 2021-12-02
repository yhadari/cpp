/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:52:17 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/01 22:36:40 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB{

    string _name;
    Weapon *_club_ptr;

    public:
    
    HumanB(string name);
    void    setWeapon(Weapon& club_ref);
    void    attack() const;
};

#endif