/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:21:00 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/20 17:17:18 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::~Phonebook(void){
    
    delete[] this->contacts;
}

Phonebook::Phonebook(void){
}

void    Phonebook::set_contacts(Contact *contacts){
    this->contacts = contacts;
}
void    Phonebook::set_nb(int nb){
    this->nb = nb;
}

Contact*    Phonebook::get_contacts(){
    return (this->contacts);
}
int         Phonebook::get_nb(){
    return (this->nb);
}

void  Phonebook::display(std::string str){
    
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
    return (info);
}

void    Phonebook::add(){
    
    Contact *contacts = this->get_contacts();
    int nb = this->get_nb();

    contacts[nb%8].set_first_name(get_info("first name : "));
    contacts[nb%8].set_last_name(get_info("last name : "));
    contacts[nb%8].set_nickname(get_info("nickname : "));
    contacts[nb%8].set_phone_number(get_info("phone number : "));
    contacts[nb%8].set_darkset_secret(get_info("darkset secret : "));
    nb++;
    this->set_contacts(contacts);
    this->set_nb(nb);
}

void    task_name(){
    
    std::cout << std::setw(10) << "index" << " | ";
    std::cout << std::setw(10) << "first name" << " | ";
    std::cout << std::setw(10) << "last name" << " | ";
    std::cout << std::setw(10) << "nickname" << " | " << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
}

void    contacts_info(Phonebook *phonebook){
    
    Contact *contacts = phonebook->get_contacts();
    int nb = phonebook->get_nb();
    
    for(int i = 0; i < nb; i++)
    {
        if (i < 8)
        {
            std::cout << std::setw(10) << i; 
            phonebook->display(contacts[i].get_first_name());
            phonebook->display(contacts[i].get_last_name());
            phonebook->display(contacts[i].get_nickname());
            std::cout << " | " << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
            phonebook->set_contacts(contacts);
            phonebook->set_nb(nb);
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
    
    Contact *contacts = phonebook->get_contacts();
    int nb = phonebook->get_nb();
    std::string cmd = "";
    
    while (cmd == "")
    {
        std::cout << "which index do you want : ";
        getline(std::cin, cmd);
    }
    while (is_not_dig(cmd) || stoi(cmd) > nb-1 || stoi(cmd) < 0 || stoi(cmd) >= 8 || cmd == "")
    {
        std::cout << "enter a valid number : ";
        getline(std::cin, cmd);
    }
    std::cout << "-------------------------------" << std::endl;
    std::cout << "first name     : " << contacts[stoi(cmd)].get_first_name() << std::endl;
    std::cout << "last name      : " << contacts[stoi(cmd)].get_last_name() << std::endl;
    std::cout << "nickname       : " << contacts[stoi(cmd)].get_nickname() << std::endl;
    std::cout << "phone number   : " << contacts[stoi(cmd)].get_phone_number() << std::endl;
    std::cout << "darkest secret : " << contacts[stoi(cmd)].get_darkset_secret() << std::endl;
    std::cout << "-------------------------------" << std::endl;
    phonebook->set_contacts(contacts);
    phonebook->set_nb(nb);
}

void    Phonebook::search(){
    
    task_name();
    contacts_info(this);
    if (this->get_nb() != 0)
        show_index(this);
}