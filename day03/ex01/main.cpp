#include "ScavTrap.hpp"

int main(){

    ClapTrap yassine("yassine");
    ScavTrap brahim("brahim");
    ScavTrap oussama;

    yassine.set_attack_damage(2);
    yassine.attack("brahim");
    brahim.takeDamage(yassine.get_attack_damage());
    oussama = brahim;
    oussama.attack("yassine");
    yassine.set_attack_damage(4);
    yassine.attack("oussama");
    oussama.takeDamage(yassine.get_attack_damage());
    oussama.guardGate();
    return 0;
}