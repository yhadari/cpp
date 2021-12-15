#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include "iostream"

class WrongAnimal{

    protected:
        std::string _type;
    public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const& copy);
    WrongAnimal& operator=(WrongAnimal const& autre);
    std::string getType() const;
    void makeSound() const;
    ~WrongAnimal();
};

#endif