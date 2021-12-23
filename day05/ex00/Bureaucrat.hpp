#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat{

    std::string const _name;
    int _grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name);
    Bureaucrat(Bureaucrat const& copy);
    Bureaucrat& operator=(Bureaucrat const& autre);
    std::string const get_Name() const;
    int         get_Grade() const;
    void    grade_increment();
    void    grade_decrement();
    ~Bureaucrat();
};

#endif