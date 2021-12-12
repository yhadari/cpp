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
    float   toFloat(void) const;
    int     toInt(void) const;
    static  Fixed const &max(Fixed &a, Fixed const &b);
    static  Fixed const &min(Fixed &a, Fixed const &b);
    
    Fixed&  operator=(Fixed const &autre);
    
    Fixed&  operator++();
    Fixed   operator++(int);
    
    Fixed   operator*(Fixed const &autre);
    Fixed   operator/(Fixed const &autre);
    Fixed   operator+(Fixed const &autre);
    Fixed   operator-(Fixed const &autre);
    
    bool    operator<(Fixed const &autre);
    bool    operator<=(Fixed const &autre);
    bool    operator>(Fixed const &autre);
    bool    operator>=(Fixed const &autre);
    bool    operator==(Fixed const &autre);
    bool    operator!=(Fixed const &autre);
};
std::ostream&   operator<<(std::ostream& os, const Fixed& objet);

#endif