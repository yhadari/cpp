#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form{

    std::string _target;
    
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const& copy);
    PresidentialPardonForm& operator=(PresidentialPardonForm const& autre);
    void    execute(Bureaucrat const & executor) const;
    ~PresidentialPardonForm();

};

#endif