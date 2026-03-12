#include<iostream>


using namespace std;

int main()
    {
        int speed ;

        cout<<"Enter the Speed in km/h :";
       
 int count=0;
        for(int i=1;i<=10;i++)
        {
             cin>>speed;
            
            if(speed>=140){
                cout<<speed<<" is Fast Deliverie ."<<endl;
                count++;
            }
            
        }
       cout<<"Total fast Deliveries :-"<<count<<endl;

       return 0;
 


    }