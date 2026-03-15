#include <iostream>
using namespace std;


class Cpomple
{
    public:
    int a,b;
    void set_data(int x,int y)
    {
        a=x;
        b=y;
        cout<<"\nData set: "<<a<<" "<<b;
    }   
    void display_data()
    {
        cout<<"\nData is: "<<a<<" "<<b;
    }
};


class Inches
{
    public:
    float inches;
    void set_inches(float x)
    {
        inches=x;
        cout<<"\nInches set:"<<inches;
    }
};

class Feet
{
    public:
    float feet;
    void set_feet(float x)
    {
        feet=x;
        cout<<"\nFeet set:"<<feet;
    }
};
void to_cm(Inches i,Feet f)

{
    cout<<"\nInches in cm:"<<i.inches*2.54;
    cout<<"\nFeet in cm:"<<f.feet*30.48;
}

int main()
{
    Cpomple c;
    c.set_data(10,20);
    c.display_data();

    Inches i;
    i.set_inches(12);
    Feet f;
    f.set_feet(3);
    to_cm(i,f);

    return 0;
}
