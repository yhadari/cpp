#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("default"), _hit_points(10), _energy_point(10), _attack_damage(0){
    std::cout << "default claptrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hit_points(10), _energy_point(10), _attack_damage(0){
    std::cout << "parameter claptrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
}