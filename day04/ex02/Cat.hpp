#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

    Brain* _brain;

    public:
    Cat();
    Cat(Cat const& copy);
    Cat& operator=(Cat const& autre);
    void makeSound() const;
    ~Cat();
};

#endif