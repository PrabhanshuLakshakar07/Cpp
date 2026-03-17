#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
int main()
{
    set<int> s = {1,2,3,4,5};
    //forward iterator
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";//1 2 3 4 5 

    }
    //backward iterator
    for(auto it = s.end(); it!=s.begin();)
    {
    
        cout<<*(--it)<<" ";//5 4 3 2 1

    }
 
}