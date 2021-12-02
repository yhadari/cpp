/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:50:15 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/02 20:33:17 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(){
    
    Karen karen;

    karen.complain("DEBUG");
    std::cout << std::endl;
    karen.complain("INFO");
    std::cout << std::endl;
    karen.complain("WARNING");
    std::cout << std::endl;
    karen.complain("ERROR");
    std::cout << std::endl;
    return 0;
}