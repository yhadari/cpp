#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{

    std::string _name;
    AMateria *_array[4];
    int _size;

    public:
    Character();
    Character(std::string name);
    Character(Character const& copy);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    Character& operator=(Character const& autre);
    ~Character();
};

#endif