#include <iostream>
#include <vector>
#include <string>
using namespace std;

// N elements in vector till first blank is given
// When user stops first print all the elements
// Find sum of all elements
// Print average of all elements
// Print elements lesser than average
// Print elements greater than average

int main()
{
    vector<int> Numbers;
    string num;

    cout << "Enter numbers (Press ENTER on blank line to stop):\n";

    while(true)
    {
        getline(cin, num);

        if(num == "")
        {
            break;
        }

        Numbers.push_back(stoi(num));
    }

    cout << "\nTotal number of elements: " << Numbers.size();

    cout << "\nElements in vector are: ";
    for(int i : Numbers)
    {
        cout << i << " ";
    }

    // Calculate sum
    int sum = 0;
    for(int i : Numbers)
    {
        sum += i;
    }

    cout << "\nSum of elements: " << sum;

    // Calculate average
    double avg = (double)sum / Numbers.size();
    cout << "\nAverage: " << avg;

    // Elements less than average
    cout << "\nElements less than average: ";
    for(int i : Numbers)
    {
        if(i < avg)
        cout << i << " ";
    }

    // Elements greater than average
    cout << "\nElements greater than average: ";
    for(int i : Numbers)
    {
        if(i > avg)
        cout << i << " ";
    }

    return 0;
}
