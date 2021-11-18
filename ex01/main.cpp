/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:23:53 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/18 21:22:39 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int argc, char **argv)
{
    argc = 1;
    argv = NULL;
    Phonebook phonebook;
    std::string cmd;

    phonebook.contacts = new Contact[8];
    phonebook.nb = 0;
    std::cout << "enter a command : ";
    std::cin >> cmd;
    while (cmd.compare("EXIT"))
    {
        while (cmd.compare("ADD") && cmd.compare("SEARCH"))
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
        cmd = "";
    }
    delete[] phonebook.contacts;
    return (0);
}