#include "ClapTrap.hpp"

int main(){

    ClapTrap yassine("yassine");
    ClapTrap oussama("oussama");

    yassine.set_attack_damage(3);
    yassine.attack("oussama");
    oussama.takeDamage(yassine.get_attack_damage());
    yassine.attack("oussama");
    oussama.takeDamage(yassine.get_attack_damage());
    oussama.beRepaired(1);
    return 0;
}