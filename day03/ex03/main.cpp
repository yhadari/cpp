#include "DiamondTrap.hpp"

int main(){

    ClapTrap CP1("CP1");
    ClapTrap CP2("CP2");
    ScavTrap SP1("SP1");
    FragTrap FP1("FP1");
    DiamondTrap DP1("DP1");

    CP1.attack("CP2");
    SP1.attack("CP2");
    FP1.attack("CP2");
    CP2.takeDamage(5);
    CP2.beRepaired(15);
    DP1.attack("FP1");
    FP1.takeDamage(20);
    SP1.guardGate();
    FP1.highFivesGuys();
    DP1.whoAmI();
    FragTrap *pDp = new DiamondTrap("test");
    pDp->attack("oussama");
    delete pDp;
    return 0;
}