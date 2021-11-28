/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:09:46 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/28 18:29:01 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << this->_name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " died" << std::endl;
}

void    Zombie::announce(void) const{
    
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}