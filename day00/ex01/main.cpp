/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:23:53 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/25 14:14:00 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    Phonebook phonebook;
    std::string cmd = "";

    while (1)
    {
        std::cout << "enter a command : ";
        getline(std::cin, cmd);
        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            return 0;
    }
    return 0;
}