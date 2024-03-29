#include "Data.hpp"

uintptr_t   serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*   deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main(void){

    Data *objet = new Data;
    objet->SetAttribute(100);
    std::cout << "adress 1: " << objet << "   value 1: " << objet->GetAttribute() << std::endl;

    uintptr_t i = serialize(objet);
    Data *objet2 = deserialize(i);

    std::cout << "adress 2: " << objet2 << "   value 2: " << objet2->GetAttribute() << std::endl;
    
    if (objet->GetAttribute() == objet2->GetAttribute())
        std::cout << "The Return Value Is Equal" << std::endl;
    else
        std::cout << "Error" << std::endl;
        
    delete objet2;
    return 0;
}