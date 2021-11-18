/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:09:40 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/18 21:04:46 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class Phonebook{
  public:
  Contact *contacts;
  int nb;
  
  Phonebook(void){
    
  };
  ~Phonebook(void);
};
#endif