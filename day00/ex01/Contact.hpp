/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:19:42 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/25 14:16:28 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact{
  
  std::string _first_name;
  std::string _last_name;
  std::string _nickname;
  std::string _phone_number;
  std::string _darkset_secret;
  
  public:
  void  set_first_name(std::string);
  void  set_last_name(std::string);
  void  set_nickname(std::string);
  void  set_phone_number(std::string);
  void  set_darkset_secret(std::string);
  
  std::string get_first_name(void) const;
  std::string get_last_name(void) const;
  std::string get_nickname(void) const;
  std::string get_phone_number(void) const;
  std::string get_darkset_secret(void) const;
};

#endif