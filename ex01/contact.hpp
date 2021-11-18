/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:19:42 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/18 21:19:32 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact{
  public:
  char first_name[512];
  char last_name[512];
  char nickname[512];
  char phone_number[512];
  char darkset_secret[512];
  
  Contact(void){
    
  };
  ~Contact(void);
};
#endif