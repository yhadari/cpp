#include <iostream>
#include <iomanip>

int main(int argc, char **argv){

    if (argc == 2){
        std::string str(argv[1]);
        /*---------------------------- char ----------------------------*/
        try{
            if (!std::isdigit(str[0]) && str.size() == 1)
                std::cout << "char : '" << static_cast<char>(*argv[1]) << "'" << std::endl;
            else{
                int i = std::stoi(str);
                if (i >= 32 && i <= 126)
                    std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
                else
                    std::cout << "char : Non displayable" << std::endl;
            }
        }
        catch (std::exception& e){
            std::cout << "char : impossible" << std::endl;
        }
        /*---------------------------- int ----------------------------*/
        try{
            if (!std::isdigit(str[0]) && str.size() == 1)
                std::cout << "int : " << static_cast<int>(*argv[1]) << std::endl;
            else{
                int i = std::stoi(str);
                std::cout << "int : " << static_cast<int>(i) << std::endl;
            }
        }
        catch(std::exception& e){
            std::cout << "int : impossible" << std::endl;
        }
        /*---------------------------- float ----------------------------*/
        try{
            if (!std::isdigit(str[0]) && str.size() == 1)
                std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(*argv[1]) << "f" <<std::endl;
            else{
                float f = std::stof(str);
                std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" <<std::endl;
            }
        }
        catch(std::exception& e){
            std::cout << "float : impossible" << std::endl;
        }
        /*---------------------------- double ----------------------------*/
        try{
            if (!std::isdigit(str[0]) && str.size() == 1)
                std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(*argv[1]) << std::endl;
            else{
                float d = std::stof(str);
                std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
            }
        }
        catch(std::exception& e){
            std::cout << "double : impossible" << std::endl;
        }
    }
    else
        std::cout << "usage:  "<< argv[0] << " \"argument\"" << std::endl;
    return 0;
}