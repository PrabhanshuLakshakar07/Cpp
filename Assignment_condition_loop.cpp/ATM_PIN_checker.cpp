#include<iostream>


using namespace std;

int main()
{
    int pin,correct_pin=1234;

    cout<<"Enter Your ATM Pin :- ";
    

    for(int i=1;i<=3;i++){
        cin>>pin;
        if(pin==correct_pin){
            cout<<"Access Granted !";
            break;
        }
        else if(i<3){
            cout<<"Wrong! ";

        }
        else{
            cout<<"Access Denied! Card blocked."; 
        }
         

    } 
   
   


    




}