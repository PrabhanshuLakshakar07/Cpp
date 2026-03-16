#include<iostream>
using namespace std;

class Product
{
private:
    string name;
    float price;

public:
    Product(string n,float p)
    {
        name = n;
        price = p;
        cout<<"Product created: "<<name<<endl;
    }

    Product(const Product &p)
    {
        name = p.name;
        price = p.price;
        cout<<"Product cloned: "<<name<<endl;
    }

    void display(int id)
    {
        cout<<"Product "<<id<<" - "<<name<<": Rs."<<price<<endl;
    }
};

int main()
{
    Product p1("Keyboard",999);
    Product p2 = p1;

    p1.display(1);
    p2.display(2);
}