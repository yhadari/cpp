#include "Form.hpp"

Form::Form() : _name("default"), _grade_signed(150), _grade_execute(150), _signed(false){
}

Form::Form(std::string const name, int grade_signed, int grade_execute) : _name(name), _grade_signed(grade_signed),
_grade_execute(grade_execute), _signed(false){
    
}

Form::Form(Form const& copy){
    *this = copy;
}

Form& Form::operator=(Form const& autre){
    this->_signed = autre._signed;
    return *this;
}

std::ostream&   operator<<(std::ostream& os, Form const& objet){
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

Form::~Form(){
}