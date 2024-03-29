#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hit_points(10), _energy_point(10), _attack_damage(0){
    std::cout << "Claptrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_point(10), _attack_damage(0){
    std::cout << "Claptrap parameter constructor" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "Claptrap destructor" << std::endl;
}

void    ClapTrap::attack(std::string const& target){
    if (this->_energy_point-this->_attack_damage <= 0){
        std::cout << this->_name << " You Are Tired" << std::endl;
        this->_energy_point = 0;
    }
    else{
        std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " 
        << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_point -= this->_attack_damage;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (this->_hit_points-(int)amount <= 0){
        std::cout << this->_name << " is Tired" << std::endl;
        this->_hit_points = 0;
    } else {
        this->_hit_points -= (int)amount;
        std::cout << this->_name << " lost " << amount << " hitpoints HP: " << this->_hit_points << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->_hit_points+amount <= 10){
        this->_hit_points += amount;
        std::cout << this->_name << " your hit_point is " << this->_hit_points << std::endl;
    } else {
        this->_hit_points = 10;
        std::cout << this->_name << " your hit_point is full" << std::endl;
    }
}

unsigned int ClapTrap::get_attack_damage(){
    return this->_attack_damage;
}

void    ClapTrap::set_attack_damage(unsigned int damage){
    this->_attack_damage = damage;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const&  autre){
    std::cout << "claptrap Assignation operator" << std::endl;
    this->_name = autre._name;
    this->_attack_damage = autre._attack_damage;
    this->_hit_points = autre._hit_points;
    this->_energy_point = autre._energy_point;
    return *this;
}

ClapTrap::ClapTrap(ClapTrap const& copy){
    std::cout << "claptrap copy constructor" << std::endl;
    *this = copy;
}