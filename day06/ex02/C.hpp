#ifndef C_HPP
# define C_HPP

#include <iostream>
#include "Base.hpp"

class C : public Base{
    
    public:

    C();
    Base*   generate(void);
    ~C();
};

#endif