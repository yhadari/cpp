/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:19:52 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/19 21:33:09 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void){
}

void    Contact::set_first_name(std::string first_name){
    this->first_name = first_name;
}
void  Contact::set_last_name(std::string last_name){
    this->last_name = last_name;
}
void  Contact::set_nickname(std::string nickname){
    this->nickname = nickname;
}
void  Contact::set_phone_number(std::string phone_number){
    this->phone_number = phone_number;
}
void  Contact::set_darkset_secret(std::string darkset_secret){
    this->darkset_secret = darkset_secret;
}

std::string Contact::get_first_name(){
    return (this->first_name);
}
std::string Contact::get_last_name(){
    return (this->last_name);
}
std::string Contact::get_nickname(){
    return (this->nickname);
}
std::string Contact::get_phone_number(){
    return (this->phone_number);
}
std::string Contact::get_darkset_secret(){
    return (this->darkset_secret);
}