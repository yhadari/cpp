/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:23:53 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/19 17:12:30 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    Phonebook phonebook;
    std::string cmd = "";

    phonebook.contacts = new Contact[8];
    phonebook.nb = 0;
    while (1)
    {
        while (cmd.compare("ADD") && cmd.compare("SEARCH") && cmd.compare("EXIT"))
        {
            std::cout << "enter a command : ";
            getline(std::cin, cmd);
        }
        if (!cmd.compare("ADD"))
            phonebook.add();
        else if (!cmd.compare("SEARCH"))
            phonebook.search();
        else if (!cmd.compare("EXIT"))
            return (0);
        cmd = "";
    }
    return (0);
}