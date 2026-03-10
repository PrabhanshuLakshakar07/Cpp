#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float area,side;
    cout<<"Enter Side Length  :" ;
    cin>>side;
    area=(sqrt(3)/4)*side*side;
    cout<<"Area Of an Equilateral Triangle is :"<<area;

    return 0;
}