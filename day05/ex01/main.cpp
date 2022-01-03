#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    
    try{
        Bureaucrat B1("brahim",140);
        Bureaucrat B2("yassine", 1);
        std::cout << B1 << std::endl;
        B1.grade_increment();
        std::cout << B1 << std::endl;
        std::cout << B2 << std::endl;
        Form F1("form", 100, 100);
        B1.signForm(F1);
        std::cout << F1 << std::endl;
        B2.signForm(F1);
        F1.beSigned(B2);
        std::cout << F1 << std::endl;
        F1.beSigned(B1);
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}