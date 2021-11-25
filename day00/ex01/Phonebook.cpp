/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:21:00 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/25 14:24:06 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){
    this->_nb = 0;
}

void  Phonebook::display(std::string str) const{
    
    std::cout << " | ";
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << '.';
    else
        std::cout << std::setw(10) << str;
}

std::string get_info(std::string str){
    
    std::string info;
    std::cout << str;
    getline(std::cin, info);
    return info;
}

void    Phonebook::add(){
    
    this->_contacts[this->_nb%8].set_first_name(get_info("first name : "));
    this->_contacts[this->_nb%8].set_last_name(get_info("last name : "));
    this->_contacts[this->_nb%8].set_nickname(get_info("nickname : "));
    this->_contacts[this->_nb%8].set_phone_number(get_info("phone number : "));
    this->_contacts[this->_nb%8].set_darkset_secret(get_info("darkset secret : "));
    this->_nb++;
}

void    task_name(){
    
    std::cout << std::setw(10) << "index" << " | ";
    std::cout << std::setw(10) << "first name" << " | ";
    std::cout << std::setw(10) << "last name" << " | ";
    std::cout << std::setw(10) << "nickname" << " | " << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
}

bool    is_not_dig(std::string cmd){
    
    for(int i = 0; cmd[i]; i++){
        if (!isdigit(cmd[i]))
            return true;
    }
    return false;
}

void    Phonebook::search() const{
    
    task_name();
    for(int i = 0; i < this->_nb; i++)
    {
        if (i < 8)
        {
            std::cout << std::setw(10) << i; 
            this->display(this->_contacts[i].get_first_name());
            this->display(this->_contacts[i].get_last_name());
            this->display(this->_contacts[i].get_nickname());
            std::cout << " | " << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
        }
        else
            break;
    }
    if (this->_nb != 0)
    {
        std::string cmd = "";
        
        while (cmd == "")
        {
            std::cout << "which index do you want : ";
            getline(std::cin, cmd);
        }
        while (cmd == "" || is_not_dig(cmd) || atoi(cmd.c_str()) > this->_nb-1 || atoi(cmd.c_str()) < 0 || atoi(cmd.c_str()) >= 8)
        {
            std::cout << "enter a valid number : ";
            getline(std::cin, cmd);
        }
        std::cout << "-------------------------------" << std::endl;
        std::cout << "first name     : " << this->_contacts[atoi(cmd.c_str())].get_first_name() << std::endl;
        std::cout << "last name      : " << this->_contacts[atoi(cmd.c_str())].get_last_name() << std::endl;
        std::cout << "nickname       : " << this->_contacts[atoi(cmd.c_str())].get_nickname() << std::endl;
        std::cout << "phone number   : " << this->_contacts[atoi(cmd.c_str())].get_phone_number() << std::endl;
        std::cout << "darkest secret : " << this->_contacts[atoi(cmd.c_str())].get_darkset_secret() << std::endl;
        std::cout << "-------------------------------" << std::endl;
    }
}