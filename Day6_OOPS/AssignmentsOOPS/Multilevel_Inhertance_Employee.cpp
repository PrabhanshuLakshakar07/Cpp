#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
};

class Employee : public Person
{
protected:
    string dept;
};

class Manager : public Employee
{
private:
    int bonus;

public:
    void set_all(string n,string d,int b)
    {
        name = n;
        dept = d;
        bonus = b;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Bonus: Rs."<<bonus<<endl;
    }
};

int main()
{
    Manager m;
    m.set_all("Arun","IT",50000);
    m.display();
}