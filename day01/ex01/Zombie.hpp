/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:34:03 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/28 19:35:15 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{

    std::string _name;
    
    public:
    
    Zombie();
    Zombie(std::string);
    ~Zombie();  

    void    announce(void) const;
};

Zombie* zombieHorde(int N, std::string name);

#endif