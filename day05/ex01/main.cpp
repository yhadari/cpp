/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:35:39 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/23 21:31:42 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    
    try{
        Bureaucrat B1;
        Bureaucrat B2("yassine", 1);
        std::cout << B1 << std::endl;
        B1.grade_increment();
        std::cout << B1 << std::endl;
        std::cout << B2 << std::endl;
        Form F1("F1", 100, 100);
        std::cout << F1 << std::endl;
        F1.beSigned(B1);
        std::cout << F1 << std::endl;
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}