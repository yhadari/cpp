#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter{

    std::string _name;
    

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