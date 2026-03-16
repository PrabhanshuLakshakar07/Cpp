#include <iostream>
#include <string>
using namespace std;

class Employee{
    private :  string name;

    public:
    Employee(string n)
    {
        name = n;
        cout << "Employee joined: "<<name<< endl;
    }

    ~Employee()
    {
        cout << "Employee left: "<<name<< endl;
    }
     };     

int main(){
    Employee e1("Kiran");
    Employee e2("Priya");
    Employee e3("Rahul");
    return 0;
}

