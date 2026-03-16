#include<iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
private:
    float c;

public:
    Celsius(float x){ 
        c = x; 
    }

    friend void convert(Celsius, Fahrenheit);
};

class Fahrenheit
{
private:
    float f;

public:
    Fahrenheit(float x){ 
        f = x; 
    }

    friend void convert(Celsius, Fahrenheit);
};

void convert(Celsius C, Fahrenheit F)
{
    cout<<C.c<<"°C = "<<(C.c*9/5+32)<<"°F"<<endl;
    cout<<F.f<<"°F = "<<((F.f-32)*5/9)<<"°C"<<endl;
}

int main()
{
    Celsius c1(100);
    Fahrenheit f1(98.6);

    convert(c1,f1);
}