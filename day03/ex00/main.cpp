#include "ClapTrap.hpp"

int main(){

    ClapTrap yassine("yassine");
    ClapTrap oussama("oussama");
    ClapTrap brahim("brahim");
    ClapTrap zaak(brahim);

    yassine.attack("oussama");
    oussama.takeDamage(yassine.get_attack_damage());
    yassine.attack("oussama");
    oussama.takeDamage(yassine.get_attack_damage());
    brahim = oussama;
    brahim.attack("oussama");
    zaak.attack("oussama");
    return 0;
}