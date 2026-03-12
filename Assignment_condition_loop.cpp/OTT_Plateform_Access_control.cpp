 #include<iostream>


using namespace std;

int main()
{
    int age,plan;
    cout<< "Enter The Age and Plane .";
    cin>>age>>plan;
   int basic = 1;
   int Premium =2;
    if (age<=18)
    {
        if(plan==1){
            cout<<"WelCome ! Kids Content Only You Have SD  Access. ";
        }else{
            cout<<"Sorry! You are Kids ! Not Access Premium Adult ";
        }
       
    }else{
        if (plan==1)
        {
            cout<<"WelCome ! Kids Content Only You Have SD  Access. ";
        }else{
             cout<<"WelCome ! You Have Full HD + 4k Access .";
        }
        
    }
    
return 0;



}