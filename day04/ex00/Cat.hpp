#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal{

    public:
    Cat();
    Cat(Cat const& copy);
    Cat& operator=(Cat const& autre);
    void makeSound() const;
    ~Cat();
};

#endif