#include <iostream>
using namespace std;

int sumdigits(int n){
  
{
    
    if(n == 0)
        return 0;
    return (n % 10) + sumdigits(n / 10);
}
   
  
    
}

int main (){

    int n;
    cout <<"enter the numbers";
    cin>>n;
    int SumDigit=sumdigits(n);
    cout<<"Sum Of Digit is :"<<SumDigit;
}