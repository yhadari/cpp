#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    
    try{
        Intern someRandomIntern;

        Form* sc;
        Form* rr;
        Form* pp;
        Form* random;

        sc = someRandomIntern.makeForm("shrubbery creation", "home");
        rr = someRandomIntern.makeForm("robotomy request", "Home");
        pp = someRandomIntern.makeForm("presidential pardon", "Bender");
        random = someRandomIntern.makeForm("random form", "Hello");
    
        if (sc) {
            std::cout << *sc;
        }
        if (rr) {
            std::cout << *rr;
        }
        if (pp) {
            std::cout << *pp;
        }
        if (random) {
            std::cout << *random;
        }
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}