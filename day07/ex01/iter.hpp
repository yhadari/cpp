#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>

void    print(T &arr){
        std::cout << arr << std::endl; 
}

template <typename T>

void    iter(T *arr, size_t arrSize, void(print)(T&)){
    std::cout << "Address is : " << arr << std::endl;
    std::cout << "Length is : " << arrSize << std::endl;
    while (arrSize--)
        print(*(arr++));
}

#endif