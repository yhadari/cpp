#include "Data.hpp"

Data::Data(){
    std::cout << "Constructor Called" << std::endl;
}

Data::Data(Data const &copy){
    std::cout << "Constructor par copie Called" << std::endl;
    *this = copy;
}

Data&   Data::operator=(Data const& autre){
    std::cout << "Assignment Operator Called" << std::endl;
    this->attribute = autre.attribute;
    return *this;
}

int Data::GetAttribute(void){
    return this->attribute;
}

void    Data::SetAttribute(int attribute){
    this->attribute = attribute;
}

Data::~Data(){
    std::cout << "Destructor Called" << std::endl;
}
