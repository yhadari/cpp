#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{

    T *_array;
    unsigned int _size;

    public:

    class   OutOfBounds : public std::exception{
        
        public:

        virtual const char* what() const throw(){
            return "Error OutOfBounds";
        }
    };
    Array<T>(void){
        std::cout << "Default Constructor Called" << std::endl;
        this->_array = new T[0];
        this->_size = 0;
    }
    Array<T>(unsigned int n){
        std::cout << "Parameter Constructor Called" << std::endl;
        this->_array = new T[n];
        this->_size = n;
        int *a = new int();
        std::cout << *a << std::endl;
    }
    Array<T>(Array<T> const &copy){
        std::cout << "Copy Constructor Called" << std::endl;
        this->_array = new T[0];
        *this = copy;
    }
    T& operator[](unsigned int i) const{
        if (i < 0 || i >= this->_size)
            throw OutOfBounds();
        return this->_array[i];
    }
    Array<T>& operator=(Array const &oArr){
        std::cout << "Assignation operator called" << std::endl;
        delete [] this->_array;
        this->_array = new T[oArr._size];
        this->_size = oArr._size;
        memcpy(this->_array, oArr._array, this->_size);
        return *this;
    }
    size_t  size(){
        return this->_size;
    };
    ~Array<T>(void){
        std::cout << "Destructor Called" << std::endl;
    }
};

#endif