#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
class Animal{

    protected:
        std::string _type;
    public:
    Animal();
    Animal(Animal const& copy);
    Animal& operator=(Animal const& autre);
    std::string getType() const;
    virtual void makeSound() const;
    ~Animal();
};

#endif