#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat{

    std::string const _name;
    int _grade;

    public:
    class   GradeTooHighException : public std::exception{
        public:
        virtual const char* what() const throw();
    };

    class   GradeTooLowException : public std::exception{
        public:
        virtual const char* what() const throw();
    };

    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const& copy);
    Bureaucrat& operator=(Bureaucrat const& autre);
    std::string const get_Name() const;
    int         get_Grade() const;
    void    grade_increment();
    void    grade_decrement();
    ~Bureaucrat();
};
std::ostream& operator<<(std::ostream& os, Bureaucrat const& objet);

#endif