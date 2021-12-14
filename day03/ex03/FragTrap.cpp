#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default contructor" << std::endl;
    this->_hit_points = 100;
    this->_energy_point = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap parametre contructor" << std::endl;
    this->_hit_points = 100;
    this->_energy_point = 100;
    this->_attack_damage = 30;
}

void    FragTrap::attack(std::string const& target){
    if (this->_energy_point-this->_attack_damage <= 0){
        std::cout << this->_name << " You Are Tired" << std::endl;
        this->_energy_point = 0;
    }
    else{
        std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " 
        << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_point -= this->_attack_damage;
    }
}

void    FragTrap::highFivesGuys(void){
    std::cout << "FragTrap high fives" << std::endl;
}

FragTrap::FragTrap(FragTrap const& copy){
    std::cout << "FragTrap copy contructor" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(FragTrap const& autre){
    std::cout << "assignation operator" << std::endl;
    this->_name = autre._name;
    this->_hit_points = autre._hit_points;
    this->_energy_point = autre._energy_point;
    this->_attack_damage = autre._attack_damage;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor" << std::endl;
}