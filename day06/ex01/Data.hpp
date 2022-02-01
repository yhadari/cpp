#ifndef DATA_H
# define DATA_H

#include <iostream>

class Data{

    int attribute;

    public:
    Data();
    Data(Data const&    copy);
    Data&   operator=(Data const&   autre);
    int     GetAttribute(void);
    void    SetAttribute(int    attribute);
    ~Data();
};

#endif