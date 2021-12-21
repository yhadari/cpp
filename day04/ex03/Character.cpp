#include "Character.hpp"

Character::Character(std::string name): _name(name), _size(0){
}

Character::Character(){
}

Character::~Character(){
    for(int i = 0; i < this->_size; i++)
        delete this->_array[i];
}

Character::Character(Character const& copy){
    *this = copy;
}

std::string const& Character::getName() const{
    return this->_name;
}

void Character::equip(AMateria* m){
    if (this->_size < 4){
        this->_array[this->_size] = m;
        this->_size++;
    }
}

void Character::unequip(int idx){
    memmove(this->_array+idx, this->_array+idx+1, this->_size-idx-1);
    this->_size--;
}

void Character::use(int idx, ICharacter& target){
    this->_array[idx]->use(target);
}

Character& Character::operator=(Character const& autre){
    this->_name = autre._name;
    for(int i = 0; i < 4; i++)
        this->_array[i] = autre._array[i];
    return *this;
}