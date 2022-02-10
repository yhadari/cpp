#include "span.hpp"

Span::Span(unsigned int N) : _N(N), _size(0){
}

void    Span::addNumber(unsigned int n){

    if (this->_size == this->_N)
        throw ArrayIsFull();
    else
    {
        this->_array_int.push_back(n);
        this->_size++;
    }
}

unsigned int    Span::shortestSpan(){

    unsigned int shortSpan;
    unsigned int value;

    if (this->_size <= 1)
        throw NoNumbersStored();
    std::vector<unsigned int>::iterator it_begin = this->_array_int.begin();
    std::vector<unsigned int>::iterator it_end = this->_array_int.end();
    std::sort(this->_array_int.begin(), this->_array_int.end());
    shortSpan = *--it_end-(*--it_end);
    while (it_end != it_begin){
        value = *it_end-(*--it_end);
        if (value < shortSpan)
            shortSpan = value;
    }
    return shortSpan;
}

unsigned int    Span::longestSpan(){

    if (this->_size <= 1)
        throw NoNumbersStored();
    std::vector<unsigned int>::iterator it_min;
    std::vector<unsigned int>::iterator it_max;
    it_min = std::min_element(this->_array_int.begin(), this->_array_int.end());
    it_max = std::max_element(this->_array_int.begin(), this->_array_int.end());
    return *it_max-*it_min;
}

Span::~Span(void){
}