/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:35:39 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/30 16:13:45 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    
    try{
        Bureaucrat B1("brahim",13);
        Form *F1 = new ShrubberyCreationForm("home");
        Form *F2 = new RobotomyRequestForm("home1");
        Form *F3 = new PresidentialPardonForm("home2");
        B1.executeForm(*F1);
        F1->execute(B1);
        F2->execute(B1);
        F3->execute(B1);
        
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}