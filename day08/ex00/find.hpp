#ifndef FIND_HPP
# define FIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

template <typename T>

void easyfind(T c_int, int n){
    
    typename T::iterator it;

    it = std::find(c_int.begin(), c_int.end(), n);
    if (it != c_int.end())
        std::cout << "the element found is " << *it << std::endl;
    else
        std::cout << "the element is not found" << std::endl;
}

#endif