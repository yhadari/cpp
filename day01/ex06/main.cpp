/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:50:15 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/02 18:15:38 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv){
    
    if (argc != 2 && std::cout << "You Need To Put One Arg" << std::endl)
        return 0;
    Karen karen;

    karen.complain(argv[1]);
    return 0;
}