#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float Celsius,fahrenheit;
    cout<<"Enter Tempreture in Fahrenheit :" ;
    cin>>fahrenheit;
    Celsius=(fahrenheit-32)*5/9;
    cout<<" Celsius is :"<<Celsius;

    return 0;
}