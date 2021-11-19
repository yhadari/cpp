/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:21:00 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/19 18:05:20 by yhadari          ###   ########.fr       */
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
    
    std::cout << "first name : ";
    getline(std::cin, this->contacts[this->nb%8].first_name);
    std::cout << "last name : ";
    getline(std::cin, this->contacts[this->nb%8].last_name);
    std::cout << "nickname : ";
    getline(std::cin, this->contacts[this->nb%8].nickname);
    std::cout << "phone number : ";
    getline(std::cin, this->contacts[this->nb%8].phone_number);
    std::cout << "darkset secret : ";
    getline(std::cin, this->contacts[this->nb%8].darkset_secret);
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
            phonebook->display(phonebook->contacts[i].first_name);
            phonebook->display(phonebook->contacts[i].last_name);
            phonebook->display(phonebook->contacts[i].nickname);
            std::cout << " | " << std::endl;
        }
        else
            break;
    }
}

bool    is_dig(std::string cmd){

    for(int i = 0; cmd[i]; i++){
        if (!isdigit(cmd[i]))
            return (false);
    }
    return (true);
}

void    show_index(Phonebook *phonebook){

    std::string cmd = "";
    
    while (!cmd.compare(""))
    {
        std::cout << "which index do you want : ";
        getline(std::cin, cmd);
    }
    while (!is_dig(cmd) || stoi(cmd) > phonebook->nb-1 || stoi(cmd) < 0 || stoi(cmd) >= 8)
    {
        std::cout << "enter a valid number : ";
        getline(std::cin, cmd);
    }
    std::cout << "first name     : " << phonebook->contacts[stoi(cmd)].first_name << std::endl;
    std::cout << "last name      : " << phonebook->contacts[stoi(cmd)].last_name << std::endl;
    std::cout << "nickname       : " << phonebook->contacts[stoi(cmd)].nickname << std::endl;
    std::cout << "phone number   : " << phonebook->contacts[stoi(cmd)].phone_number << std::endl;
    std::cout << "darkest secret : " << phonebook->contacts[stoi(cmd)].darkset_secret << std::endl;
}

void    Phonebook::search(){
    
    task_name();
    contacts_info(this);
    if (this->nb != 0)
        show_index(this);
}