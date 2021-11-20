/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:19:52 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/20 18:44:38 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

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

std::string Contact::get_first_name(){
    return (this->_first_name);
}
std::string Contact::get_last_name(){
    return (this->_last_name);
}
std::string Contact::get_nickname(){
    return (this->_nickname);
}
std::string Contact::get_phone_number(){
    return (this->_phone_number);
}
std::string Contact::get_darkset_secret(){
    return (this->_darkset_secret);
}