#include <iostream>

class Data{
    public:
    int attribute;

    Data(){std::cout << "hello" << std::endl;};
    ~Data(){std::cout << "good bye" << std::endl;};
};

uintptr_t   serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*   deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main(void){
    Data *objet = new Data;
    objet->attribute = 10;
    uintptr_t i = serialize(objet);
    Data *objet2 = deserialize(i);
    std::cout << "adress : " << objet << "| value : " << objet->attribute << std::endl;
    std::cout << "adress : " << objet2 << "| value : " << objet2->attribute << std::endl;
    delete objet;
    return 0;
}