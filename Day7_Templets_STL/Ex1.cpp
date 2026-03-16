#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    string gender;
    public:
    void set(string n,string g)
    {
        name = n;   
        gender = g;
    }   
};

class Study : public Human
{
protected:
    string degree;
    public:
    Study(string n,string g,string d,int s)
    {     name = n;
        gender = g;
        degree = d;
    }
};

class Job : public Study
{
private:
    int salary;

public:

    void job(string n,string g,string d,int s):Study( n,g,d)
    {
        salary = s;
    }

    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nGender: "<<gender;
        cout<<"\nDegree: "<<degree;
        cout<<"\nSalary: "<<salary;
    }
};

int main()
{
    Job j;
    j.job("Arun","Male","B.Tech",50000);
    j.display();

}
