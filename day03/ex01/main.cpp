#include "ScavTrap.hpp"

int main(){

    ClapTrap CP1("CP1");
    ClapTrap CP2("CP2");
    ClapTrap CP3;
    ScavTrap SP1("SP1");

    CP1.attack("CP2");
    CP2.takeDamage(3);
    SP1.attack("CP2");
    CP2.takeDamage(20);
    CP2.beRepaired(10);
    SP1.guardGate();
    return 0;
}