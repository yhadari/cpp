/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:35:39 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/24 15:54:18 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    
    try{
        Bureaucrat B1("brahim",140);
        Bureaucrat B2("yassine", 1);
        std::cout << B1 << std::endl;
        B1.grade_increment();
        std::cout << B1 << std::endl;
        std::cout << B2 << std::endl;
        Form F1("form", 100, 100);
        B2.signForm(F1);
        B1.signForm(F1);
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}