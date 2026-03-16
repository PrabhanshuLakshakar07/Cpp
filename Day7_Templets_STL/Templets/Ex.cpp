#include<iostream>
using namespace std;
//Templet 
template <typename T>T myMax(T a,T b)
{
    return (a>b)?a:b;
  

}   

int main()
{
    cout<<"Add two integers: "<<myMax<int>(3,7)<<endl;//Call myMax for int
    cout<<"Add two doubles: "<<myMax<double>(3.0,7.0)<<endl;//Call myMax for double
    cout<<"Add two characters: "<<myMax<char>('g','e')<<endl;//Call myMax for char
    cout<<myMax<int>(3,7)<<endl;//Call myMax for int
    cout<<myMax<double>(3.0,7.0)<<endl;//Call myMax for double
    cout<<myMax<char>('g','e')<<endl;//Call myMax for char
    return 0;
}