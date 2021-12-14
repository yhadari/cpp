#include "FragTrap.hpp"

int main(){

    ClapTrap yassine("yassine");
    ScavTrap brahim("brahim");
    FragTrap oussama("oussama");

    yassine.set_attack_damage(2);
    yassine.attack("brahim");
    brahim.takeDamage(yassine.get_attack_damage());
    oussama.attack("yassine");
    yassine.set_attack_damage(4);
    yassine.attack("oussama");
    oussama.takeDamage(yassine.get_attack_damage());
    oussama.highFivesGuys();
    return 0;
}