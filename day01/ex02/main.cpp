/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:38:06 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/28 21:51:25 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main(){
    
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    cout << &str << endl;
    cout << stringPTR << endl;
    cout << &stringREF << endl;
    cout << str << endl;
    cout << stringREF << endl;

    return 0;
}