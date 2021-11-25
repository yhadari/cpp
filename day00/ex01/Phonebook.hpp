/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:09:40 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/25 21:38:37 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iomanip>
#include <string>

class Phonebook{
  
  Contact _contacts[8];
  int     _nb;

  void  display(std::string) const;
  
  public:
  
  void  search(void) const;
  void  add(void);

  Phonebook(void);
};
#endif