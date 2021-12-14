#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap{

    std::string _name;
    int _hit_points;
    int _energy_point;
    int _attack_damage;

    public:

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const& copy);
    ClapTrap& operator=(ClapTrap const& autre);
    ~ClapTrap();
    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int get_attack_damage();
    void    set_attack_damage(unsigned int);
};

#endif