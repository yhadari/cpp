#include "A.hpp"

A::A(){
    std::cout << "A Constructor" << std::endl;
}

Base*   A::generate(void){
    A *instance = new A;
    return dynamic_cast<Base*>(instance);
}

A::~A(){
    std::cout << "A Destructor" << std::endl;
}