#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

    public:
    WrongCat();
    WrongCat(WrongCat const& copy);
    WrongCat& operator=(WrongCat const& autre);
    std::string getType() const;
    void makeSound() const;
    ~WrongCat();
};

#endif