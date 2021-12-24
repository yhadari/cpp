#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150){
    std::cout << "bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade){
    std::cout << "bureaucrat parametre constructor" << std::endl;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy){
    std::cout << "bureaucrat constructor par copie" << std::endl;
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& autre){
    std::cout << "bureaucrat Assignment operator" << std::endl;
    this->_grade = autre._grade;
    return *this;
}

std::string const Bureaucrat::get_Name() const{
    return this->_name;
}

int Bureaucrat::get_Grade() const{
    return this->_grade;
}

void    Bureaucrat::grade_decrement(){
    if (this->_grade > 149)
        throw GradeTooLowException();
    this->_grade++;
}

void    Bureaucrat::grade_increment(){
    if (this->_grade < 2)
        throw GradeTooHighException();
    this->_grade--;
}

std::ostream&   operator<<(std::ostream& os, Bureaucrat const& objet){
    os << objet.get_Name() << " bureaucrat grade " << objet.get_Grade();
    return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "error : Too High Grade";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "error : Too Low Grade";
}

Bureaucrat::~Bureaucrat(){
    std::cout << "bureaucrat destructor" << std::endl;
}