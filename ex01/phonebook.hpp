/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:09:40 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/22 22:08:28 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iomanip>
#include <string>

class Phonebook{
  
  private:
  Contact _contacts[8];
  int     _nb;
  
  public:

  Contact*  get_contacts();
  int       get_nb();
  void  set_nb(int);
  void  display(std::string);
  void  add(void);
  void  search();

  Phonebook(void);
};
#endif