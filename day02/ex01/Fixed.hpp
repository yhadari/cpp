#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <math.h>

class Fixed{
    
    int _valeur;
    static const int _nb_bit = 8;

    public:
    
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(Fixed const &copy);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    Fixed&  operator=(Fixed const &copy);
    float   toFloat(void) const;
    int     toInt(void) const;
};
std::ostream&   operator<<(std::ostream& os, Fixed const& objet);

#endif