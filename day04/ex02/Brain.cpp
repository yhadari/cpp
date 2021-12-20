#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Constructor" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain Destructor" << std::endl;
}

Brain::Brain(Brain const& copy){
    std::cout << "Brain Copy Constructor" << std::endl;
    *this = copy;
}

Brain& Brain::operator=(Brain const& autre){
    std::cout << "Brain Assignment" << std::endl;
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = autre._ideas[i];
    return *this;
}
