#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float perimeter,length,width;
    cout<<"Enter length and width   :" ;
    cin>>length>>width;
    perimeter=2*(length+width);
    cout<<"Perimeter of rectangle is :"<<perimeter;

    return 0;
}