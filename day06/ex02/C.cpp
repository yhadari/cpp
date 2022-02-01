#include "C.hpp"

C::C(){
    std::cout << "C Constructor" << std::endl;
}

Base*   C::generate(void){
    C *instance = new C;
    return dynamic_cast<Base*>(instance);
}

C::~C(){
    std::cout << "C Destructor" << std::endl;
}