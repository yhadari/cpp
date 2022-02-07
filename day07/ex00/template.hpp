#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template <typename T>

T min(T arg1, T arg2){
    if (arg1 < arg2)
        return arg1;
    return arg2;
}

template <typename T>

T max(T arg1, T arg2){
    if (arg1 > arg2)
        return arg1;
    return arg2;
}

template <typename T>

void swap(T &arg1, T &arg2){
    T save = arg1;
    arg1 = arg2;
    arg2 = save;
}

#endif