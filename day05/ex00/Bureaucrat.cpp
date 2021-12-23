#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"){
}

Bureaucrat::Bureaucrat(std::string name) : _name(name){
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy){
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& autre){
    this->_grade = autre._grade;
    return *this;
}

std::string const Bureaucrat::get_Name() const{
    return this->_name;
}

int Bureaucrat::get_Grade() const{
    return this->_grade;
}

void    Bureaucrat::grade_increment(){
    try{
        if (this->_grade < )
        this->_grade--;
    }
}

void    Bureaucrat::grade_decrement(){
    this->_grade++;
}

Bureaucrat::~Bureaucrat(){
}