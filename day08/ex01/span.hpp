#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>

class Span{

    unsigned int _N;
    unsigned int _size;
    std::vector<unsigned int> _array_int;

    public:

    class NoNumbersStored : public std::exception{

        const char* what() const throw(){
            return "No Numbers Stored";
        }
    };
    class ArrayIsFull : public std::exception{

        const char* what() const throw(){
            return "The Array Is Full";
        }
    };
    Span(unsigned int N);
    void            addNumber(unsigned int n);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();

    template<typename T>
    void    fill_array(T begin_it, T end_it, unsigned int n){
        this->_array_int.insert (this->_array_int.begin(), begin_it, end_it);
        this->_size = n;
    }
    ~Span(void);
};

#endif