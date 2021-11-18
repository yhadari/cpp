/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:39:06 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/18 18:36:26 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

Sample::~Sample(void){
    std::cout << "destructor called " << std::endl;
    return ;
}
Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3){
    std::cout << "constructor called " << std::endl;
    return ;
}

int main()
{
    Sample instance('3', 1, 1.2f);
    std::cout << instance.a1 << std::endl;
    std::cout << instance.a2 << std::endl;
    std::cout << instance.a3 << std::endl;
    return (0);
}