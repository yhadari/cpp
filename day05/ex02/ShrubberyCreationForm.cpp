#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("defult", 145, 137){
    std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137){
    this->_target = target;
    std::cout << "ShrubberyCreationForm parametre constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy) :
Form("ShrubberyCreationForm", 145, 137){
    std::cout << "ShrubberyCreationForm constructor par copie" << std::endl;
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& autre){
    this->_target = autre._target;
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    std::ofstream file;
    if (executor.get_Grade() <= this->get_Grade_Execute())
    file.open(this->_target+"_shrubbery");
    file << "yassine" << std::endl;
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor" << std::endl;
}