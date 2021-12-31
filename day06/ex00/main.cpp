#include <iostream>
#include <stdlib.h>
#include <iomanip>

int main(int argc, char **argv){

    argc = 0;
    std::string str(argv[1]);
    try{
        int i = std::stoi(str);
        char c = (char)i;
        if (i >= 32)
            std::cout << "char : '" << c << "'" << std::endl;
        else
            std::cout << "char : Non displayable" << std::endl;
    }
    catch (std::exception& e){
        std::cout << "char : impossible" << std::endl;
    }

    try{
        int i = std::stoi(str);
        std::cout << "int : " << i << std::endl;
    }
    catch(std::exception& e){
        std::cout << "int : impossible" << std::endl;
    }

    try{
        float f = std::stof(str);
        std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" <<std::endl;
    }
    catch(std::exception& e){
        std::cout << "float : impossible" << std::endl;
    }

    try{
        double d = std::stof(str);
        std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
    }
    catch(std::exception& e){
        std::cout << "double : impossible" << std::endl;
    }
    
    return 0;
}