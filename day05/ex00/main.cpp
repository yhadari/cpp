#include "Bureaucrat.hpp"

int main(){
    
    try{
        Bureaucrat B1;
        Bureaucrat B2("yassine", 1);
        std::cout << B1 << std::endl;
        B1.grade_increment();
        std::cout << B1 << std::endl;
        std::cout << B2 << std::endl;
        B2.grade_increment();
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}