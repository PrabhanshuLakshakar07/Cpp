#include<iostream>


using namespace std;

int main(){
     

 char signals ;
 int count = 0;
 cout<< "Enter The Any 5 Signal :-" ;

for(int i=1;i<=5;i++){
    cin>>signals;
    if (signals=='G')
    {
        cout<<"Go!";
        count++;
        
    }else if(signals=='Y'){
        cout<<" Get Ready !";
    }
    else if (signals=='R'){
        cout<<" Stop!";
    }
    

}
cout<<"Total Go Signal:"<<count;


return 0;




}