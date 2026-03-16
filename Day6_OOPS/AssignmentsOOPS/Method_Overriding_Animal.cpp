#include<iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout<<"Animal makes a sound"<<endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout<<"Dog: Woof Woof!"<<endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout<<"Cat: Meow Meow!"<<endl;
    }
};

int main()
{
    Animal a;
    Dog d;
    Cat c;

    a.speak();
    d.speak();
    c.speak();
}