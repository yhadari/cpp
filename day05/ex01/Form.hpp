#ifndef FORM_H
# define FORM_H

#include <iostream>

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

    Form();
    Form(std::string const name, int grade_signed, int grade_execute);
    Form(Form const& copy);
    Form& operator=(Form const& autre);
    std::string const get_Name() const;
    int         get_Grade_Signed() const;
    int         get_Grade_Execute() const;
    bool        get_Signed() const;
    void        beSigned();
    ~Form();
};
std::ostream& operator<<(std::ostream& os, Form const& objet);

#endif