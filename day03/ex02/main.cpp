#include "FragTrap.hpp"

int main(){

    ClapTrap CP1("CP1");
    ClapTrap CP2("CP2");
    ScavTrap SP1("SP1");
    FragTrap FP1("FP1");

    CP1.attack("CP2");
    CP2.takeDamage(3);
    SP1.attack("CP2");
    CP2.takeDamage(20);
    CP2.beRepaired(10);
    FP1.attack("CP2");
    CP2.takeDamage(5);
    CP2.beRepaired(15);
    SP1.guardGate();
    FP1.highFivesGuys();
    return 0;
}