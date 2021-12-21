#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class AMateria{

    protected:
    std::string _type;

    public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const& copy);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    AMateria& operator=(AMateria const& autre);
    ~AMateria();
};

#endif