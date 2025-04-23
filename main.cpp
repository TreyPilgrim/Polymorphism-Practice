#include <iostream>

class Base
{
public:
    void virtual say_hello() const
    {
        std::cout << "Hello - I'm a Base Class Object" << std::endl;
    }
};

class Derived : public Base
{
public:
    void say_hello() const
    {
        std::cout << "Hello - I'm a Derived Class Object" << std::endl;
    }
};

void greetings(const Base &obj)
{
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main()
{
    Derived obj;
    greetings(obj);

    return 0;
}