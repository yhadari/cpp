/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:49:35 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/25 16:50:16 by yhadari          ###   ########.fr       */
/*          1                                                                  */
/* ************************************************************************** */

#include <iostream>

class main1
{
    public:
    int i;

    void bar(void) const{
        std::cout << "function called" << std::endl;
    }
};

int main(){

    main1 inst;
    main1 *instp = &inst;

    int     main1::*p = &main1::i;
    void    (main1::*f)(void) const = &main1::bar;

    inst.i = 175;
    std::cout << inst.i << std::endl << inst.*p << std::endl;
    std::cout << instp->i << std::endl << instp->*p << std::endl;


    inst.bar();
    (instp->*f)();
    return 0;
}