#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor" << std::endl;
    this->_hit_points = 100;
    this->_energy_point = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap parameter constructor" << std::endl;
    this->_hit_points = 100;
    this->_energy_point = 50;
    this->_attack_damage = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor" << std::endl;
}

void    ScavTrap::attack(std::string const& target){
    if (this->_energy_point-this->_attack_damage <= 0){
        std::cout << this->_name << " You Are Tired" << std::endl;
        this->_energy_point = 0;
    }
    else{
        std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " 
        << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_point -= this->_attack_damage;
    }
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const&  autre){
    std::cout << "ScavTrap Assignation operator" << std::endl;
    this->_name = autre._name;
    this->_attack_damage = autre._attack_damage;
    this->_hit_points = autre._hit_points;
    this->_energy_point = autre._energy_point;
    return *this;
}

ScavTrap::ScavTrap(ScavTrap const& copy){
    std::cout << "ScavTrap copy constructor" << std::endl;
    *this = copy;
}