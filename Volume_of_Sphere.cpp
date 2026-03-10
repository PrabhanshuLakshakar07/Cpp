#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float volume,PI=3.14,Radius;
    cout<<"Radius of sphere :" ;
    cin>>Radius;
    volume=(4.0/3.0)*PI*Radius*Radius*Radius;
    cout<<"Volume of Sphere is :"<<volume;

    return 0;
}