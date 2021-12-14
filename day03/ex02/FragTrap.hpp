#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{

    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const& copy);
    FragTrap& operator=(FragTrap const& autre);
    void highFivesGuys(void);
    void    attack(std::string const& target);
    ~FragTrap();
};

#endif