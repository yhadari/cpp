/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:05:10 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/25 14:17:22 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_first_name(std::string first_name){
    this->_first_name = first_name;
}
void  Contact::set_last_name(std::string last_name){
    this->_last_name = last_name;
}
void  Contact::set_nickname(std::string nickname){
    this->_nickname = nickname;
}
void  Contact::set_phone_number(std::string phone_number){
    this->_phone_number = phone_number;
}
void  Contact::set_darkset_secret(std::string darkset_secret){
    this->_darkset_secret = darkset_secret;
}

std::string Contact::get_first_name(void) const{
    return _first_name;
}
std::string Contact::get_last_name(void) const{
    return _last_name;
}
std::string Contact::get_nickname(void) const{
    return _nickname;
}
std::string Contact::get_phone_number(void) const{
    return _phone_number;
}
std::string Contact::get_darkset_secret(void) const{
    return _darkset_secret;
}