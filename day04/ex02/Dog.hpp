#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

    Brain* _brain;

    public:
    Dog();
    Dog(Dog const& copy);
    Dog& operator=(Dog const& autre);
    void makeSound() const;
    ~Dog();
};

#endif