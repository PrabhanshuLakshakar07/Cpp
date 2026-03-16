

//enum or enumerated data type allows the user to create a different data type with user-defined fixed constant values, 
//giving better readability and ease of programming.
// You can either assign them with a specific value or they are assigned with 0 to n-1 positions.

#include <iostream>
using namespace std;
enum pizza {personal=10,medium=15,large=20}; //only int values are allowed in enum and by default it starts with 0, but we can assign any value to it.  
float base_price=25.00;
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
//            0       1        2       3         4          5      6
int main()
{
    week today;
    today = Wednesday;
    pizza size;
    size=large;
    cout << "Day " << today+1;

    cout<<"\ncost of pizza: medium:"<<base_price*size;
   
    return 0;
}