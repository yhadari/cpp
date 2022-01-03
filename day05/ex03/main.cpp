#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    
    try{
        Intern someRandomIntern;
        Bureaucrat B1("bureau", 100);

        Form* sc = someRandomIntern.makeForm("shrubbery creation", "tree");
        Form* rr = someRandomIntern.makeForm("robotomy request", "robotomy");
        Form* pp = someRandomIntern.makeForm("presidential pardon", "presidential");
        //Form* random = someRandomIntern.makeForm("random form", "Hello");
    
        if (sc) {
            sc->beSigned(B1);
            std::cout << *sc << std::endl;
        }
        if (rr) {
            std::cout << *rr << std::endl;
        }
        if (pp) {
            std::cout << *pp << std::endl;
        }
        /*if (random) {
            std::cout << *random << std::endl;
        }*/
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}