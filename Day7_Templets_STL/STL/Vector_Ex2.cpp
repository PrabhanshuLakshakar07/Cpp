#include <iostream>
#include <vector>
#include <string>
using namespace std;
//N elements in vector till first blank is given 
//When user stops first print all the elements. 
//Find! Some of all elements 
//Print average of all elements. 
//Then print all elements lesser than the average. 
//Print all elements greater than the average. 

int main()
{
    vector<int> Numbers;
    string num;
    int sum=0;
    int count=0;
    int avg=0;
    int less=0;
    int greater=0;
    int i=0;

    cout << "Enter numbers (Enter negative number to stop): ";

    while(true)
    {
        getline(cin,num);
        if(num=="")
        {
            break;   // stop when negative number appears
        }
        Numbers.push_back(stoi(num));   // add number to vector
        sum+=stoi(num);
        count++;
    }
    avg=sum/count;

    
    
    

    
    cout << "\nTotal number of elements: " << Numbers.size();

    cout << "\nElements in vector are: ";

    for(int i : Numbers)
    {
        cout << i<< " ";
    }

    return 0;
}
