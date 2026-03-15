#include<iostream>
#include<cmath>
using namespace std;

int evenodd(int number){
    if(number%2==0){
        cout<<"\n"<<number<<" is even";
    }
    else  {
       cout<<"\n"<<number<< " is odd"; 
    }      
    
        
    
}

int main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;
    int checkevenodd=evenodd(number);
    
   cout<<checkevenodd;
    
    return 0;
}