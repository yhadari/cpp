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

    class ElementIsAlreadyExist : public std::exception{

        unsigned int _e;
        public:
        
        ElementIsAlreadyExist(unsigned int e): _e(e){
        }
        virtual const char* what() const throw(){
            std::string str = "This Element Is Already Exist : ";
        }
    };
    class NoNumbersStored : public std::exception{
        public:
        
        virtual const char* what() const throw(){
            return "No Numbers Stored";
        }
    };
    class ArrayIsFull : public std::exception{
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