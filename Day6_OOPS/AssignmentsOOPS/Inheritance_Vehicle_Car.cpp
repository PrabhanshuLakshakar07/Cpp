#include<iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    int speed;

public:
    void show_brand()
    {
        cout<<"Brand: "<<brand<<endl;
    }
};

class Car : public Vehicle
{
private:
    int doors;

public:
    void set_all(string b,int s,int d)
    {
        brand = b;
        speed = s;
        doors = d;
    }

    void display()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<" km/h"<<endl;
        cout<<"Doors: "<<doors<<endl;
    }
};

int main()
{
    Car c;
    c.set_all("Toyota",180,4);
    c.display();
}