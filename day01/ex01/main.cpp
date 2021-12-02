/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:05:55 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/02 19:51:46 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    int i = 0;
    int nb_zombie = 3;
    if (nb_zombie > 0)
    {
        Zombie *zombies = zombieHorde(nb_zombie, "zombie");
        while (i < nb_zombie)
            zombies[i++].announce();
        delete [] zombies;
    }
    return 0;
}