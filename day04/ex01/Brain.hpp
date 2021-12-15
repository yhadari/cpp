#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain{

    std::string _ideas[100];

    public:
    Brain();
    Brain(Brain const& copy);
    Brain& operator=(Brain const& autre);
    ~Brain();
};

#endif