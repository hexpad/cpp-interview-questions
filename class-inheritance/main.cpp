#include <iostream>
#include <string>

class Animal{
private:
    std::string m_name{};

public:
    Animal(const std::string& name)
        :m_name{name}
    {}

    virtual void speak() const
    {
        std::cout << "Animal sound\n";
    }
};

class Dog : public Animal
{
public:
    Dog(const std::string& name)
        :Animal{name}   // Base class constructor call
    {}

    void speak() const override
    {
        std::cout << "Woof\n";
    }
};

int main()
{

    Animal a{"Cookie"};
    a.speak();

    Dog b{"Buddy"};
    b.speak();


}
