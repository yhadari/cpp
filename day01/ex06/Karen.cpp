/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:43:57 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/01 21:54:16 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug(void){
    
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
}
void    Karen::info(void){

    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void    Karen::warning(void){

    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}
void    Karen::error(void){

    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
void    Karen::complain(std::string level){
    
    int is_insignificant = 1;
    
    std::string strings[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*FT[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    
    for(int i = 0; i < 4; i++){
        if (strings[i] == level){
            is_insignificant = 0;
            while (i < 4)
            (this->*FT[i++])();
        }
    }
    if (is_insignificant)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}