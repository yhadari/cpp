#include <iostream>

class Data{

    int attribute;

    public:
    Data(){
        std::cout << "Constructor Called" << std::endl;
    };
    Data(Data const &copy){
        std::cout << "Constructor par copie Called" << std::endl;
        *this = copy;
    };
    Data&   operator=(Data const& autre){
        std::cout << "Assignment Operator Called" << std::endl;
        this->attribute = autre.attribute;
        return *this;
    };
    int     GetAttribute(void){return this->attribute;}
    void    SetAttribute(int attribute){this->attribute = attribute;}
    ~Data(){
        std::cout << "Destructor Called" << std::endl;
    };
};

int * test(void * i){
    return reinterpret_cast<int*>(i);
}
uintptr_t   serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*   deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main(void){

    Data *objet = new Data;
    objet->SetAttribute(10);
    uintptr_t i = serialize(objet);
    Data *objet2 = deserialize(i);
    std::cout << "adress 1: " << objet << "   value 1: " << objet->GetAttribute() << std::endl;
    std::cout << "adress 2: " << objet2 << "   value 2: " << objet2->GetAttribute() << std::endl;
    if (objet->GetAttribute() == objet2->GetAttribute())
        std::cout << "The Return Value Is Equal" << std::endl;
    else
        std::cout << "Error" << std::endl;
    delete objet2;
    return 0;
}