/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:19:42 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/20 18:43:48 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact{
  
  private:
  std::string _first_name;
  std::string _last_name;
  std::string _nickname;
  std::string _phone_number;
  std::string _darkset_secret;
  
  public:
  void  set_first_name(std::string first_name);
  void  set_last_name(std::string last_name);
  void  set_nickname(std::string nickname);
  void  set_phone_number(std::string phone_number);
  void  set_darkset_secret(std::string darkset_secret);
  
  std::string get_first_name();
  std::string get_last_name();
  std::string get_nickname();
  std::string get_phone_number();
  std::string get_darkset_secret();
  
};

#endif