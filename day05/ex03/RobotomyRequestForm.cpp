#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("defult", 72, 45){
    this->_target = "default";
    std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45){
    this->_target = target;
    std::cout << "RobotomyRequestForm parametre constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) :
Form("RobotomyRequestForm", 72, 45){
    std::cout << "RobotomyRequestForm constructor par copie" << std::endl;
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& autre){
    this->_target = autre._target;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (executor.get_Grade() <= this->get_Grade_Execute() && !this->get_Signed()){
        static int i = 0;
        if (i%2 == 0)
            std::cout << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->_target << " it’s a failure" << std::endl;
        i++;
    }
    else if(this->get_Signed())
        throw Form::Formisigned(this->get_Name());
    else
        throw Form::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor" << std::endl;
}