/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:35:47 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/28 19:22:36 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

    int i = 0;
    Zombie *zombies = new Zombie[N];
    
    while (i < N)
        zombies[i++] = Zombie(name);
    return zombies;
}