#include <iostream>

class Book{
    public:
    std::string title;
    int         pages;
    Book(std::string t)
    {
        title = t;
        pages = -1;
    }
    Book(std::string atitle, int apages)
    {
        title = atitle;
        pages = apages;
    }
};
int main()
{
    std::string name = "yassine";
    int age = 23;
    std::cout << "my name is " << name << std::endl;
    std::cout << "my age is " << age << std::endl;

    Book book1("harry poter", 200);
    Book book2("sakbvjwkvjk", 1);
    std::cout << book2.title << std::endl;
    std::cout << book2.pages << std::endl;
    return (0);
}