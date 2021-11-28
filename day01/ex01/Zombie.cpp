/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:02:04 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/28 19:47:54 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "create zombie" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "initialize " << this->_name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " destructor called" << std::endl;
}

void    Zombie::announce(void) const{
    
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}