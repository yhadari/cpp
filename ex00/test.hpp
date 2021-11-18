/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:37:52 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/18 18:36:41 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include <iostream>

class Sample{
    public:
    
    char a1;
    int a2;
    float a3;

    Sample(char, int, float);
    ~Sample(void);
};

#endif