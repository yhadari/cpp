#include "ClapTrap.hpp"

int main(){

    ClapTrap CP1("CP1");
    ClapTrap CP2("CP2");

    CP1.attack("CP2");
    CP2.takeDamage(3);
    CP2.beRepaired(2);
    return 0;
}