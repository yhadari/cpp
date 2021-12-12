#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap& autre);
    ScavTrap& operator=(ScavTrap const& autre);
    ~ScavTrap();
};

#endif