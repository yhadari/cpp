/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:50:15 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/02 21:54:40 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv){
    
    Karen karen;
    
    if (argc != 2){
        std::cout << "usage:  "<< argv[0] << " level" << std::endl;
        return 0;
    }
    karen.complain(argv[1]);
    return 0;
}