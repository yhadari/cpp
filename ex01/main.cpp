/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:23:53 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/20 16:10:12 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    Phonebook phonebook;
    Contact *contacts;
    int nb;
    std::string cmd = "";

    nb = 0;
    contacts = new Contact[8];
    phonebook.set_contacts(contacts);
    phonebook.set_nb(nb);
    while (1)
    {
        while (cmd != "ADD" && cmd != "SEARCH" && cmd!= "EXIT")
        {
            std::cout << "enter a command : ";
            getline(std::cin, cmd);
        }
        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            return (0);
        cmd = "";
    }
    return (0);
}