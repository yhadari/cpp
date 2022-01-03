#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("defult", 72, 45){
    this->_target = "default";
    std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 72, 45){
    this->_target = target;
    std::cout << "PresidentialPardonForm parametre constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy) :
Form("PresidentialPardonForm", 72, 45){
    std::cout << "PresidentialPardonForm constructor par copie" << std::endl;
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& autre){
    this->_target = autre._target;
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (executor.get_Grade() <= this->get_Grade_Execute() && this->get_Signed()){
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
    else if(not this->get_Signed())
        throw Form::Form_is_not_signed(this->get_Name());
    else
        throw Form::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor" << std::endl;
}