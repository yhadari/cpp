/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:15:07 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/29 18:42:52 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA{
    
    string _name;
    Weapon& _club_ref;
    
    public:
    
    HumanA(string name, Weapon &club_ref);
    void attack() const;
};

#endif