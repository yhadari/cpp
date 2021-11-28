/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:09:51 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/28 18:28:56 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{
    
    std::string _name;

    public:
    
      Zombie(std::string);
      ~Zombie();
      
      void  announce(void) const;  
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif