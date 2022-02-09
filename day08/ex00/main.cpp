#include "find.hpp"

int main(){
    std::vector<int> v; // Pushing the values one-by-one in vector using push_back()

    v.push_back(25);
    v.push_back(13);
    easyfind(v, 20);
    easyfind(v, 13);

    return 0;
}