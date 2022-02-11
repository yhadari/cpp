#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{

    public:

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator  begin(){
        return this->c.begin();
    }

    iterator  end(){
        return this->c.end();
    }

    MutantStack(){};
    ~MutantStack(void){};
};

#endif