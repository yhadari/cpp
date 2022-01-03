#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    
    try{
        Bureaucrat B1("brahim",15);
        Form *F1 = new ShrubberyCreationForm("Tree");
        Form *F2 = new RobotomyRequestForm("Robotomy");
        Form *F3 = new PresidentialPardonForm("Presidential");
        B1.executeForm(*F1);

        F1->beSigned(B1);
        F1->execute(B1);

        F2->beSigned(B1);
        F2->execute(B1);

        F3->beSigned(B1);
        F3->execute(B1);
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}