#include "Form.hpp"

Form::Form() : _name("default"), _grade_signed(150), _grade_execute(150), _signed(false){
    std::cout << "form default constructor" << std::endl;
}

Form::Form(std::string const name, int grade_signed, int grade_execute) : _name(name), _grade_signed(grade_signed),
_grade_execute(grade_execute), _signed(false){
    std::cout << "form parametre constructor" << std::endl;
    if (this->_grade_signed < 1 || this->_grade_execute < 1)
        throw Form::GradeTooHighException();
    if (this->_grade_signed > 150 || this->_grade_execute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const& copy) : _name("default"), _grade_signed(150), _grade_execute(150), _signed(false){
    std::cout << "form constructor par copie" << std::endl;
    *this = copy;
}

Form& Form::operator=(Form const& autre){
    (void)autre;
    return *this;
}

std::ostream&   operator<<(std::ostream& os, Form const& objet){
    if (objet.get_Signed())
        os << "The Form '" << objet.get_Name() << "' Is Signed";
    else
        os << "The Form '" << objet.get_Name() << "' Is Not Signed";
    return os;
}

bool    Form::beSigned(Bureaucrat const& objet){
    if (objet.get_Grade() > this->_grade_signed)
        throw Form::GradeTooLowException();
    this->_signed = true;
    return true;
}

std::string const Form::get_Name() const{
    return this->_name;
}

int Form::get_Grade_Signed() const{
    return this->_grade_signed;
}

int Form::get_Grade_Execute() const{
    return this->_grade_execute;
}

bool        Form::get_Signed() const{
    return this->_signed;
}

const char* Form::GradeTooHighException::what() const throw(){
    return "error : Too High Grade";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "error : Too Low Grade";
}

Form::Form_is_not_signed::Form_is_not_signed(std::string name){
    this->_name = name;
}

const char* Form::Form_is_not_signed::what() const throw(){
    std::string str = "error : The Form " + this->_name + " Is Not Signed";
    const char *s = str.c_str();
    return s;
}

Form::~Form(){
    std::cout << "form destructor" << std::endl;
}