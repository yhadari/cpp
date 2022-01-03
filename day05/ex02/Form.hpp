#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{

    std::string const _name;
    int const   _grade_signed;
    int const   _grade_execute;
    bool _signed;

    public:
    class   GradeTooHighException : public std::exception{
        public:
        virtual const char* what() const throw();
    };

    class   GradeTooLowException : public std::exception{
        public:
        virtual const char* what() const throw();
    };

    class   Form_is_not_signed : public std::exception{
        std::string _name;
        public:
        Form_is_not_signed(std::string);
        virtual const char* what() const throw();
        ~Form_is_not_signed() throw(){};
    };

    Form();
    Form(std::string const name, int grade_signed, int grade_execute);
    Form(Form const& copy);
    Form& operator=(Form const& autre);
    std::string const get_Name() const;
    int         get_Grade_Signed() const;
    int         get_Grade_Execute() const;
    bool        get_Signed() const;
    bool        beSigned(Bureaucrat const& objet);
    virtual void    execute(Bureaucrat const & executor) const = 0;
    ~Form();
};
std::ostream& operator<<(std::ostream& os, Form const& objet);

#endif