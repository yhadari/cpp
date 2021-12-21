#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria{

    public:

    Cure();
    Cure(Cure const& copy);
    AMateria* clone() const;
    Cure& operator=(Cure const& autre);
    ~Cure();
};

#endif