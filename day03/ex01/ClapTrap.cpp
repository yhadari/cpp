#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hit_points(10), _energy_point(10), _attack_damage(0){
    std::cout << "default claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_point(10), _attack_damage(0){
    std::cout << "parameter claptrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "claptrap destructor called" << std::endl;
}

void    ClapTrap::attack(std::string const& target){
    if (this->_energy_point == 0)
        std::cout << "You Are Tired" << std::endl;
    else{
        std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " 
        << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_point--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (this->_hit_points <= 0){
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        this->_hit_points = 0;
    } else {
        this->_hit_points -= amount;
        std::cout << "ClapTrap " << this->_name << " lost " << amount << " hitpoints (" << this->_hit_points << "/10)" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->_hit_points+amount <= 10){
        this->_hit_points += amount;
        std::cout << "your hit_point is " << this->_hit_points << "/10" << std::endl;
    } else {
        this->_hit_points = 10;
        std::cout << "your hit_point is full" << std::endl;
    }
}

unsigned int ClapTrap::get_attack_damage(){
    return this->_attack_damage;
}

void    ClapTrap::set_attack_damage(unsigned int damage){
    this->_attack_damage = damage;
}