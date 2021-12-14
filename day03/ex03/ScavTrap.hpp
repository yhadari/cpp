#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& copy);
    ScavTrap& operator=(ScavTrap const& autre);
    ~ScavTrap();
    void    guardGate();
    void    attack(std::string const& target);
};

#endif