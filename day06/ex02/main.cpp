#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p){
    A *instance1 = dynamic_cast<A*>(p);
    B *instance2 = dynamic_cast<B*>(p);
    C *instance3 = dynamic_cast<C*>(p);
    if (instance1)
        std::cout << "type is 'A'" << std::endl;
    else if(instance2)
        std::cout << "type is 'B'" << std::endl;
    else if(instance3)
        std::cout << "type is 'C'" << std::endl;
}

void identify(Base& p){
    try{
        A &instance1 = dynamic_cast<A&>(p);
        (void)instance1;
        std::cout << "type is 'A'" << std::endl;
        return;
    }
    catch(std::exception &e){
    }

    try{
        B &instance1 = dynamic_cast<B&>(p);
        (void)instance1;
        std::cout << "type is 'B'" << std::endl;
        return;
    }
    catch(std::exception &e){
    }

    try{
        C &instance1 = dynamic_cast<C&>(p);
        (void)instance1;
        std::cout << "type is 'C'" << std::endl;
        return;
    }
    catch(std::exception &e){
    }
}

int main(void){
    Base *base = new Base;
    A a;
    B b;
    C c;

    int o = 1;
    int *i = static_cast<int*>(&o);
    base = a.generate();
    identify(base);
    identify(*base);

    base = b.generate();
    identify(base);
    identify(*base);

    base = c.generate();
    identify(base);
    identify(*base);

    return 0;
}