#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap default contructor" << std::endl;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_point = ScavTrap::_energy_point;
    this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name){
    std::cout << "DiamondTrap parametre contructor" << std::endl;
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_point = ScavTrap::_energy_point;
    this->_attack_damage = FragTrap::_attack_damage;
}

void    DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap_name : " << this->_name << std::endl;
    std::cout << "ClapTrap_name : " << ClapTrap::_name << std::endl;
}

void    DiamondTrap::attack(std::string const& target){
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy){
    std::cout << "DiamondTrap copy contructor" << std::endl;
    *this = copy;
}

DiamondTrap&    DiamondTrap::operator=(DiamondTrap const& autre){
    std::cout << "DiamondTrap Assignation operator" << std::endl;
    this->_name = autre._name;
    this->_attack_damage = autre._attack_damage;
    this->_hit_points = autre._hit_points;
    this->_energy_point = autre._energy_point;
    return *this;
}