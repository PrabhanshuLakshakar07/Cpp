#include <iostream>
using namespace std;

float CelsiusToFehrenheit(int n){
    float fehrenheit;
    fehrenheit=(n*9/5)+32;
    return fehrenheit;

    

}

int main(){
     int n ;
     cout<<"Enter the Celsius :";
     cin>>n;
        float fehrenheit = CelsiusToFehrenheit(n);
     cout<<"temp in Fehrenheit is : -"<<fehrenheit;
     return 0;
}
