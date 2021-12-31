#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(Intern const& copy){
    std::cout << "Intern constructor par copie" << std::endl;
    *this = copy;
}

Intern& Intern::operator=(Intern const& autre){
    (void)autre;
    return *this;
}

Form*   Intern::CreatRobotomyRequest(std::string target){
    Form *ptr = new RobotomyRequestForm(target);
    std::cout << "Intern creates " << target << " form" << std::endl;
    return ptr;
}

Form*   Intern::CreatShrubberyCreation(std::string target){
    Form *ptr = new ShrubberyCreationForm(target);
    std::cout << "Intern creates " << target << " form" << std::endl;
    return ptr;
}

Form*   Intern::CreatPresidentialPardon(std::string target){
    Form *ptr = new PresidentialPardonForm(target);
    std::cout << "Intern creates " << target << " form" << std::endl;
    return ptr;
}

Intern::form_not_exist::form_not_exist(std::string form){
    this->_form = form;
}

const char* Intern::form_not_exist::what() const throw(){
    std::string str = "this form '" + this->_form + "' not exist";
    char *s = new char[str.length() + 1];
    strcpy(s, str.c_str());
    return s;
}

Form*   Intern::makeForm(std::string form, std::string target){
    int index = -1;
    std::string str[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    Form* (Intern::*ptr_to_ft[3])(std::string target) = {&Intern::CreatRobotomyRequest, &Intern::CreatShrubberyCreation, &Intern::CreatPresidentialPardon};
    for (size_t i = 0; i < 3; i++){
        if (str[i] == form && (index = i))
            break;
    }
    if (index == -1)
        throw Intern::form_not_exist(form);
    return (this->*ptr_to_ft[index])(target);
}

Intern::~Intern(){
    std::cout << "Intern destructor" << std::endl;
}