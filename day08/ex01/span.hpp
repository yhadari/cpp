#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span{

    unsigned int _N;
    unsigned int _size;
    std::vector<unsigned int> _array_int;

    public:

    class elementIsAlreadyExist : public std::exception{
        public:
        
        virtual const char* what() const throw(){
            return "This Element Is Already Exist";
        }
    };
    class noNumbersStored : public std::exception{
        public:
        
        virtual const char* what() const throw(){
            return "No Numbers Stored";
        }
    };
    class arrayIsFull : public std::exception{
        public:
        
        virtual const char* what() const throw(){
            return "The Array Is Full";
        }
    };
    Span(unsigned int N);
    void            addNumber(unsigned int n);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();
    ~Span(void);
};

#endif