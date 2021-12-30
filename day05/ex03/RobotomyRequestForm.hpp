#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form{

    std::string _target;
    
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const& copy);
    RobotomyRequestForm& operator=(RobotomyRequestForm const& autre);
    void    execute(Bureaucrat const & executor) const;
    ~RobotomyRequestForm();

};

#endif