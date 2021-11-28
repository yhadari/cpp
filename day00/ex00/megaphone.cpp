/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:34:35 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/18 17:28:45 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for(int i = 1; i < argc; i++)
    {
        for(int j = 0; argv[i][j]; j++)
            if (islower(argv[i][j]))
                argv[i][j] = toupper(argv[i][j]);
        std::cout << argv[i];
    }
    std::cout << std::endl;
    return (0);
}