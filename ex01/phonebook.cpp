/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:21:00 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/19 21:50:20 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::~Phonebook(void){
    delete[] this->contacts;
}

Phonebook::Phonebook(void){
}
void  Phonebook::display(std::string str){
    
    std::cout << " | ";
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << '.';
    else
        std::cout << std::setw(10) << str;
}

void    Phonebook::add(){
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkset_secret;
    
    std::cout << "first name : ";
    getline(std::cin, first_name);
    this->contacts[this->nb%8].set_first_name(first_name);
    std::cout << "last name : ";
    getline(std::cin, last_name);
    this->contacts[this->nb%8].set_last_name(last_name);
    std::cout << "nickname : ";
    getline(std::cin, nickname);
    this->contacts[this->nb%8].set_nickname(nickname);
    std::cout << "phone number : ";
    getline(std::cin, phone_number);
    this->contacts[this->nb%8].set_phone_number(phone_number);
    std::cout << "darkset secret : ";
    getline(std::cin, darkset_secret);
    this->contacts[this->nb%8].set_darkset_secret(darkset_secret);
    this->nb++;
}

void    task_name(){
    std::cout << std::setw(10) << "index" << " | ";
    std::cout << std::setw(10) << "first name" << " | ";
    std::cout << std::setw(10) << "last name" << " | ";
    std::cout << std::setw(10) << "nickname" << " | " << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
}

void    contacts_info(Phonebook *phonebook){
    for(int i = 0; i < phonebook->nb; i++)
    {
        if (i < 8)
        {
            std::cout << std::setw(10) << i; 
            phonebook->display(phonebook->contacts[i].get_first_name());
            phonebook->display(phonebook->contacts[i].get_last_name());
            phonebook->display(phonebook->contacts[i].get_nickname());
            std::cout << " | " << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
        }
        else
            break;
    }
}

bool    is_not_dig(std::string cmd){
    for(int i = 0; cmd[i]; i++){
        if (!isdigit(cmd[i]))
            return (true);
    }
    return (false);
}

void    show_index(Phonebook *phonebook){
    std::string cmd = "";
    
    while (cmd != "")
    {
        std::cout << "which index do you want : ";
        getline(std::cin, cmd);
    }
    while (is_not_dig(cmd) || stoi(cmd) > phonebook->nb-1 || stoi(cmd) < 0 || stoi(cmd) >= 8 || cmd == "")
    {
        std::cout << "enter a valid number : ";
        getline(std::cin, cmd);
    }
    std::cout << "-------------------------------" << std::endl;
    std::cout << "first name     : " << phonebook->contacts[stoi(cmd)].get_first_name() << std::endl;
    std::cout << "last name      : " << phonebook->contacts[stoi(cmd)].get_last_name() << std::endl;
    std::cout << "nickname       : " << phonebook->contacts[stoi(cmd)].get_nickname() << std::endl;
    std::cout << "phone number   : " << phonebook->contacts[stoi(cmd)].get_phone_number() << std::endl;
    std::cout << "darkest secret : " << phonebook->contacts[stoi(cmd)].get_darkset_secret() << std::endl;
    std::cout << "-------------------------------" << std::endl;
}

void    Phonebook::search(){
    task_name();
    contacts_info(this);
    if (this->nb != 0)
        show_index(this);
}