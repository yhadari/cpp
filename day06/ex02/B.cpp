#include "B.hpp"

B::B(){
    std::cout << "B Constructor" << std::endl;
}

Base*   B::generate(void){
    B *instance = new B;
    return dynamic_cast<Base*>(instance);
}

B::~B(){
    std::cout << "B Destructor" << std::endl;
}