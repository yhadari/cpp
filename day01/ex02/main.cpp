/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:38:06 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/01 22:25:19 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of the string : " << &str << std::endl;
    std::cout << "Address of the string : " << stringPTR << std::endl;
    std::cout << "Address of the string : " << &stringREF << std::endl;
    
    std::cout << "the string : " << str << std::endl;
    std::cout << "the string : " << stringREF << std::endl;

    return 0;
}