#include<iostream>
using namespace std;

class Voter
{
    string name;
    int age;
public:
    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }

    void canVote()
    {
        if(age>=18)
            cout<<name<<" is eligible to vote.\n";
        else
            cout<<name<<" is not eligible to vote.\n";
    }
};

int main()
{

    Voter v1;
    v1.input();
    v1.canVote();

    return 0;
}

