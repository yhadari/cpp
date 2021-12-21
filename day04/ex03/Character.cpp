#include "Character.hpp"

Character::Character(std::string name): _name(name){
}

Character::Character(){
}

Character::~Character(){
}

Character::Character(Character const& copy){
    *this = copy;
}

std::string const& Character::getName() const{
    return this->_name;
}

void Character::equip(AMateria* m){
}

void Character::unequip(int idx){
}

void Character::use(int idx, ICharacter& target){
}

Character& Character::operator=(Character const& autre){
    this->_name = autre._name;
    return *this;
}