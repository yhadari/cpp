#include "span.hpp"

int main()
{
    try{
        unsigned int i = 20000;
        Span sp = Span(i);
        srand(time(0));
        //-------------------------simple------------------------

        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);

        //---------------------random numbers--------------------

        // while (i--)
        //     sp.addNumber(rand());

        //---------------------random numbers--------------------

        // std::list<unsigned int> v;
        // while (i--)
        //     v.push_back(rand());
        // sp.fill_array(v.begin(), v.end(), 10000);

        //---------------------------*---------------------------

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
