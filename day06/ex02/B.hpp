#ifndef B_HPP
# define B_HPP

#include <iostream>
#include "Base.hpp"

class B : public Base{

    public:

    B();
    Base*   generate(void);
    ~B();
};

#endif