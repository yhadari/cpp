/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:18:47 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/04 21:32:41 by yhadari          ###   ########.fr       */
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
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif