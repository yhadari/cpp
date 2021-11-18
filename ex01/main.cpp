/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:23:53 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/18 22:49:42 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    int index = -1 ;
    Phonebook phonebook;
    std::string cmd = "";

    phonebook.contacts = new Contact[8];
    phonebook.nb = 0;
    while (1)
    {
        while (cmd.compare("ADD") && cmd.compare("SEARCH") && cmd.compare("EXIT"))
        {
            std::cout << "enter a command : ";
            std::cin >> cmd;
        }
        if (!cmd.compare("ADD"))
        {
            std::cout << "first name : ";
            std::cin >> phonebook.contacts[phonebook.nb%8].first_name;
            std::cout << "last name : ";
            std::cin >> phonebook.contacts[phonebook.nb%8].last_name;
            std::cout << "nickname : ";
            std::cin >> phonebook.contacts[phonebook.nb%8].nickname;
            std::cout << "phone number : ";
            std::cin >> phonebook.contacts[phonebook.nb%8].phone_number;
            std::cout << "darkset secret : ";
            std::cin >> phonebook.contacts[phonebook.nb%8].darkset_secret;
            phonebook.nb++;
        }
        else if (!cmd.compare("SEARCH"))
        {
            while (++index < phonebook.nb)
            {
                std::cout << index;
                phonebook.display(phonebook.contacts[index].first_name);
                phonebook.display(phonebook.contacts[index].last_name);
                phonebook.display(phonebook.contacts[index].nickname);
                std::cout << std::endl;
            }
        }
        else if (!cmd.compare("EXIT"))
            return (0);
        cmd = "";
        index = -1;
    }
    return (0);
}