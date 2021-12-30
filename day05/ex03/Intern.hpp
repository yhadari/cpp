#ifndef INTERN_H
# define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{

    public:
    class form_not_exist : public std::exception{
        std::string _form;
        public:
        form_not_exist(std::string form);
        virtual const char* what() const throw();
        ~form_not_exist() throw(){};
    };

    Intern();
    Intern(Intern const& copy);
    Intern& operator=(Intern const& autre);
    Form*   CreatRobotomyRequest(std::string target);
    Form*   CreatShrubberyCreation(std::string target);
    Form*   CreatPresidentialPardon(std::string target);
    Form* makeForm(std::string form, std::string target);
    ~Intern();

};

#endif