#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{

    std::string _name;

    public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const& copy);
    DiamondTrap& operator=(DiamondTrap const& autre);
    void    whoAmI();
    void    attack(std::string const& target);
    ~DiamondTrap();
};

#endif