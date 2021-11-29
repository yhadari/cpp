/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:45:36 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/29 18:32:41 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Weapon{

    string _club;

    public:
    
    Weapon(string club);
    const string getType() const;
    void setType(string newclub);
};

#endif