#include<iostream>
using namespace std;

int main(){
    int n,sum=0,i;
    cout<<"Enter the N Numeber :-";
    cin>> n;
    int arr[100];
    int expect =n*(n+1)/2 ;
    for(int i=0;i<n-1;i++)
   
    {

        cin>> arr[i];
        sum =sum+arr[i];

        
    }
    
    cout<<"Missing Value is :"<< expect-sum ;

    return 0;


}