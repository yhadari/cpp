#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria{

    public:

    Ice();
    Ice(Ice const& copy);
    AMateria* clone() const;
    Ice& operator=(Ice const& autre);
    ~Ice();
};

#endif