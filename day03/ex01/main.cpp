#include "ClapTrap.hpp"

int main(){

    ClapTrap player1("yassine");
    ClapTrap player2("oussama");

    player1.set_attack_damage(4);
    player1.attack("oussama");
    player1.takeDamage(3);
    player1.takeDamage(3);
    player1.beRepaired(2);
    player1.beRepaired(4);
    player1.beRepaired(1);

    return 0;
}