#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{

    std::string _target;
    
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const& copy);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& autre);
    void    execute(Bureaucrat const & executor) const;
    ~ShrubberyCreationForm();

};

#endif