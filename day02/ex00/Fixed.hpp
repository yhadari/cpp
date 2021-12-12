#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed{
    
    int _valeur;
    static const int _nb_bit = 8;

    public:

    Fixed();
    Fixed(Fixed const &copy);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed&  operator=(Fixed const &copy);
};

#endif