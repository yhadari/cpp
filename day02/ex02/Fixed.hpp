/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:18:47 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/06 22:46:18 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed{
    
    int _valeur;
    static const int _nb_bit = 8;

    public:
    
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(Fixed const &copy);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed&  operator=(Fixed const &autre);
    bool    operator<(Fixed const &autre);
    bool    operator<=(Fixed const &autre);
    bool    operator>(Fixed const &autre);
    bool    operator>=(Fixed const &autre);
    bool    operator==(Fixed const &autre);
    bool    operator!=(Fixed const &autre);
};

#endif