#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal{

    public:
    Dog();
    Dog(Dog const& copy);
    Dog& operator=(Dog const& autre);
    void makeSound() const;
    ~Dog();
};

#endif