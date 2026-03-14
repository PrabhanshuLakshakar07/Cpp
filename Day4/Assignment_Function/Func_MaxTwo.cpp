#include<iostream>
using namespace std;



int twoMax(int a, int b){
    int Max=max(a,b);
    return Max;
}







int main(){
    int a,b;
    cout<<"Enter Two Number :";
    cin>>a>>b;
    int MaximumOfTwo=twoMax(a,b);
    cout<<"Largest Number is "<<MaximumOfTwo;
}