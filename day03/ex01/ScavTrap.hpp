#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap& autre);
    ScavTrap& operator=(ScavTrap const& autre);
    ~ScavTrap();
    void    guardGate();
    void    attack(std::string const& target);
};

#endif