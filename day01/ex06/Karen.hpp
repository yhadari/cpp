/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:34:13 by yhadari           #+#    #+#             */
/*   Updated: 2021/12/01 19:53:27 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>

class Karen{
    
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    
    public:

    void    complain(std::string level);
};

#endif