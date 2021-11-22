/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:05:10 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/22 22:05:22 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_first_name(std::string first_name){
    _first_name = first_name;
}
void  Contact::set_last_name(std::string last_name){
    _last_name = last_name;
}
void  Contact::set_nickname(std::string nickname){
    _nickname = nickname;
}
void  Contact::set_phone_number(std::string phone_number){
    _phone_number = phone_number;
}
void  Contact::set_darkset_secret(std::string darkset_secret){
    _darkset_secret = darkset_secret;
}

std::string Contact::get_first_name(){
    return (_first_name);
}
std::string Contact::get_last_name(){
    return (_last_name);
}
std::string Contact::get_nickname(){
    return (_nickname);
}
std::string Contact::get_phone_number(){
    return (_phone_number);
}
std::string Contact::get_darkset_secret(){
    return (_darkset_secret);
}